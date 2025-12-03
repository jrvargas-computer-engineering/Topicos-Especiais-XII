module neuron_wrapper #(
    parameter N = 4,             // Bits por peso (ex: 4)
    parameter N_INPUTS = 8,      // Quantidade de entradas
    parameter LOG_N_INPUTS = 3
) (
    input  wire        clk,
    input  wire        rst,
    input  wire        en,         // Enable do neurônio (cálculo)
    
    // --- Interface Simplificada (Shift) ---
    input  wire        load_en,    // 1 = Empurra valores para dentro
    input  wire signed [31:0] w_in, // Entrada de um peso (32 bits safe)
    input  wire signed [31:0] x_in, // Entrada de um dado (32 bits safe)

    // --- Saída Segura ---
    output wire signed [31:0] out_safe
);

    // Registradores gigantes para armazenar tudo
    reg signed [N*N_INPUTS-1:0] W_reg;
    reg signed [N*N_INPUTS-1:0] X_reg;

    // Lógica de Shift Register
    // A cada clock com 'load_en', o dado novo entra no LSB e empurra o resto para a esquerda.
    always @(posedge clk) begin
        if (rst) begin
            W_reg <= 0;
            X_reg <= 0;
        end
        else if (load_en) begin
            // Concatena: {Resto Antigo, Novo Valor Truncado}
            // O valor mais antigo vai sendo empurrado para os bits mais altos (MSB)
            W_reg <= {W_reg[N*(N_INPUTS-1)-1:0], w_in[N-1:0]};
            X_reg <= {X_reg[N*(N_INPUTS-1)-1:0], x_in[N-1:0]};
        end
    end

    // Instância do Neurônio Original
    wire signed [N-1:0] neuron_out;

    neuron_intra_Nbits #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) u_neuron (
        .clk(clk),
        .rst(rst),
        .en(en),
        .W(W_reg),   // Liga o registrador cheio no neurônio
        .X_N(X_reg),
        .Out(neuron_out)
    );

    // Saída com extensão de sinal para 32 bits (para o Python ler correto)
    assign out_safe = {{ (32-N){neuron_out[N-1]} }, neuron_out};
endmodule


module neuron_intra_Nbits #(
    parameter N = 8,
    parameter N_INPUTS = 8,
    parameter LOG_N_INPUTS = 3 // log2(N_INPUTS)
) (
    input  wire                         clk,
    input  wire                         rst,
    input  wire                         en,
    input  wire signed [N*N_INPUTS-1:0] W,    // pesos packed
    input  wire signed [N*N_INPUTS-1:0] X_N,  // entradas packed
    output reg signed [         N-1:0] Out
);

  // Resultados das multiplicações
  wire signed [2*N*N_INPUTS-1:0] prod;
  wire signed [         N-1:0] act_out;

  genvar i;
  generate
    for (i = 0; i < N_INPUTS; i = i + 1) begin : mults
      wire signed [N-1:0] Wi;
      wire signed [N-1:0] Xi;

      assign Wi = W[i*N+:N];
      assign Xi = X_N[i*N+:N];

        //mudanca maxpy
        [[MULTIPLIER_TYPE]] #(2*N, [[MULTIPLIER_K]]) mult_i (
        Wi,
        Xi,
        prod[i*2*N+:2*N]
        );
        //assign prod[i*2*N+:2*N] = Wi * Xi;

      // substuir aqui 
    [[MULTIPLIER_TYPE]] #(16, [[MULTIPLIER_K]]) mult1 (a, x, p);
    end
  endgenerate

  // Soma de todos os produtos
  genvar j, k;
  generate
    for (j = 0; j < LOG_N_INPUTS; j = j + 1) begin : ADDER_TREE
      wire signed [2*N*(N_INPUTS >> (j+1))-1:0] sum_stage;
      if(j == 0) begin
        for (k = 0; k < (N_INPUTS >> (j+1)); k = k + 1) begin : STAGE0
          assign sum_stage[2*k*N+:2*N] = prod[2*k*2*N+:2*N] + prod[(2*k+1)*2*N+:2*N];
        end
      end else begin
        for (k = 0; k < (N_INPUTS >> (j+1)); k = k + 1) begin : STAGEJ
          assign sum_stage[2*k*N+:2*N] = ADDER_TREE[j-1].sum_stage[2*k*2*N+:2*N] + ADDER_TREE[j-1].sum_stage[(2*k+1)*2*N+:2*N];
        end
      end
    end
    wire signed [2*N-1:0] sum_all;
    assign sum_all = ADDER_TREE[LOG_N_INPUTS-1].sum_stage;
  endgenerate


  // Registrador do acumulador
  reg signed [2*N-1:0] acc;
  always @(posedge clk or posedge rst) begin
    if (rst) begin
		acc <= 0;
		Out <= 0;
	 end
    else if (en) begin
		acc <= sum_all;
		Out <= act_out;
	 end
  end
  localparam signed [N-1:0] MAX_VAL = {1'b0, {(N-1){1'b1}}}; // maior valor positivo representável em N bits
  assign act_out = (acc > MAX_VAL) ? MAX_VAL : acc;
endmodule

