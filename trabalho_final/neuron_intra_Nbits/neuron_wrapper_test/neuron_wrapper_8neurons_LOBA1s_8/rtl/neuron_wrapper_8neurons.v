// =======================================
// Wrapper para instanciar 2 neuronios
// compatível com MAxPy
// =======================================
module neuron_wrapper_8neurons #(
    parameter N = 8,
    parameter N_INPUTS = 4,
    parameter LOG_N_INPUTS = 2
)(
    input  wire clk,
    input  wire rst,
    input  wire en,
    input  wire load_en,

    // Entradas neuronio 0
    input  wire signed [31:0] w_in_0,
    input  wire signed [31:0] x_in_0,
    // Entradas neuronio 1
    input  wire signed [31:0] w_in_1,
    input  wire signed [31:0] x_in_1,
    // Entradas neuronio 2
    input  wire signed [31:0] w_in_2,
    input  wire signed [31:0] x_in_2,
    // Entradas neuronio 3
    input  wire signed [31:0] w_in_3,
    input  wire signed [31:0] x_in_3,
    // Entradas neuronio 4
    input  wire signed [31:0] w_in_4,
    input  wire signed [31:0] x_in_4,
    // Entradas neuronio 5
    input  wire signed [31:0] w_in_5,
    input  wire signed [31:0] x_in_5,
    // Entradas neuronio 6
    input  wire signed [31:0] w_in_6,
    input  wire signed [31:0] x_in_6,
    // Entradas neuronio 7
    input  wire signed [31:0] w_in_7,
    input  wire signed [31:0] x_in_7,


    output wire signed [31:0] out_safe_0,
    output wire signed [31:0] out_safe_1,
    output wire signed [31:0] out_safe_2,
    output wire signed [31:0] out_safe_3,
    output wire signed [31:0] out_safe_4,
    output wire signed [31:0] out_safe_5,
    output wire signed [31:0] out_safe_6,
    output wire signed [31:0] out_safe_7
);

    // -------------------------------
    // Neuronio 0
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron0 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_0),
        .x_in(x_in_0),
        .out_safe(out_safe_0)
    );

    // -------------------------------
    // Neuronio 1
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron1 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_1),
        .x_in(x_in_1),
        .out_safe(out_safe_1)
    );

    // -------------------------------
    // Neuronio 2
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron2 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_2),
        .x_in(x_in_2),
        .out_safe(out_safe_2)
    );

    // -------------------------------
    // Neuronio 3
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron3 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_3),
        .x_in(x_in_3),
        .out_safe(out_safe_3)
    );


    // -------------------------------
    // Neuronio 4
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron4 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_4),
        .x_in(x_in_4),
        .out_safe(out_safe_4)
    );

    // -------------------------------
    // Neuronio 5
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron5 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_5),
        .x_in(x_in_5),
        .out_safe(out_safe_5)
    );

    // -------------------------------
    // Neuronio 6
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron6 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_6),
        .x_in(x_in_6),
        .out_safe(out_safe_6)
    );

    // -------------------------------
    // Neuronio 7
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron7 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_7),
        .x_in(x_in_7),
        .out_safe(out_safe_7)
    );

    // -------------------------------
    // Neuronio 8
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) neuron8 (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in_8),
        .x_in(x_in_8),
        .out_safe(out_safe_8)
    );
endmodule


module neuron_wrapper #(
    parameter N = 8,            
    parameter N_INPUTS = 4,      
    parameter LOG_N_INPUTS = 2
) (
    input  wire        clk,
    input  wire        rst,
    input  wire        en,         
    
    input  wire        load_en,    
    input  wire signed [31:0] w_in, 
    input  wire signed [31:0] x_in, 

    output wire signed [31:0] out_safe
);

    reg signed [N*N_INPUTS-1:0] W_reg;
    reg signed [N*N_INPUTS-1:0] X_reg;

  
    always @(posedge clk) begin
        if (rst) begin
            W_reg <= 0;
            X_reg <= 0;
        end
        else if (load_en) begin
            W_reg <= {W_reg[N*(N_INPUTS-1)-1:0], w_in[N-1:0]};
            X_reg <= {X_reg[N*(N_INPUTS-1)-1:0], x_in[N-1:0]};
        end
    end

    wire signed [N-1:0] neuron_out;


    // eh possivel alterar depois para colco
    neuron_intra_Nbits #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_INPUTS)
    ) u_neuron (
        .clk(clk),
        .rst(rst),
        .en(en),
        .W(W_reg),   
        .X_N(X_reg),
        .Out(neuron_out)
    );

    // Saida com extensão de sinal para 32 bits (para o Python ler correto)
    assign out_safe = {{ (32-N){neuron_out[N-1]} }, neuron_out};
endmodule


module neuron_intra_Nbits #(
    parameter N = 8,
    parameter N_INPUTS = 4,
    parameter LOG_N_INPUTS = 2 // log2(N_INPUTS)
) (
    input  wire                         clk,
    input  wire                         rst,
    input  wire                         en,
    input  wire signed [N*N_INPUTS-1:0] W,    
    input  wire signed [N*N_INPUTS-1:0] X_N,  
    output reg signed [         N-1:0] Out
    //output reg signed [2*N + $clog2(N_INPUTS)-1:0] Out

);

  // Resultados das multiplicações
  //wire signed [2*N*N_INPUTS-1:0] prod;
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
        LOBA1s #(2*N, 8) mult_i (
        Wi,
        Xi,
        prod[i*2*N+:2*N]
        );
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
  localparam signed [N-1:0] MIN_VAL = {1'b1, {(N-1){1'b0}}}; // menor valor negativo
    
  assign act_out = (acc > MAX_VAL) ? MAX_VAL :
                   (acc < MIN_VAL) ? MIN_VAL :
                    acc;
endmodule

