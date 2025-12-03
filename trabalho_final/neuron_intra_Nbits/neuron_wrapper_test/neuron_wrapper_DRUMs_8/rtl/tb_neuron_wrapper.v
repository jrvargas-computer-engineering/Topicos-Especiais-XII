`timescale 1ns/1ps

module tb_neuron_wrapper;

    // -------------------------------
    // Parâmetros (ajuste se quiser)
    // -------------------------------
    localparam N          = 8;
    localparam N_INPUTS   = 8;
    localparam LOG_N_IN   = 3;

    // -------------------------------
    // Sinais do testbench
    // -------------------------------
    reg clk;
    reg rst;
    reg en;
    reg load_en;
    reg signed [31:0] w_in;
    reg signed [31:0] x_in;

    wire signed [31:0] out_safe;

    // -------------------------------
    // DUT
    // -------------------------------
    neuron_wrapper #(
        .N(N),
        .N_INPUTS(N_INPUTS),
        .LOG_N_INPUTS(LOG_N_IN)
    ) dut (
        .clk(clk),
        .rst(rst),
        .en(en),
        .load_en(load_en),
        .w_in(w_in),
        .x_in(x_in),
        .out_safe(out_safe)
    );

    // -------------------------------
    // Clock
    // -------------------------------
    always #5 clk = ~clk; // 100 MHz


    // -------------------------------
    // Tarefa para empurrar um par W/X
    // -------------------------------
    task push_values;
        input signed [31:0] w;
        input signed [31:0] x;
    begin
        @(posedge clk);
        load_en = 1;
        w_in = w;
        x_in = x;
        @(posedge clk);
        load_en = 0;
    end
    endtask

    // -------------------------------
    // Teste principal
    // -------------------------------
    initial begin
        $display("\n===== TESTE neuron_wrapper =====");

        // Inicialização
        clk = 0;
        rst = 1;
        en  = 0;
        load_en = 0;
        w_in = 0;
        x_in = 0;

        // Reset
        repeat(3) @(posedge clk);
        rst = 0;

        // -------------------------
        // SHIFT dos 8 valores
        // -------------------------
        // Exemplos simples (altere conforme teste)
        $display("\n--- Enviando valores W e X via shift register ---");

        push_values( 1,  2);
        push_values(-1, -2);
        push_values( 3, -4);
        push_values( 2,  1);
        push_values(-3,  3);
        push_values( 1, -1);
        push_values( 2,  2);
        push_values(-2, -3);

        $display("Shift completo! Registradores devem estar cheios.\n");

        // -------------------------
        // Ativa o cálculo
        // -------------------------
        @(posedge clk);
        en = 1;
        @(posedge clk);
        en = 0;

        // Aguarda propagação
        repeat(4) @(posedge clk);

        $display("Saída (out_safe) = %0d", out_safe);

        $display("\n===== FIM DO TESTE =====");
        $finish;
    end

endmodule
