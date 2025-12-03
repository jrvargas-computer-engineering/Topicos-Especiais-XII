`timescale 1ns/1ps

module tb_neuron_wrapper;

    // -------------------------------
    // Parâmetros
    // -------------------------------
    localparam N          = 8;
    localparam N_INPUTS   = 4;
    localparam LOG_N_IN   = 2;

    // -------------------------------
    // Sinais
    // -------------------------------
    reg clk;
    reg rst;
    reg en;
    reg load_en;

    reg  signed [31:0] w_in;
    reg  signed [31:0] x_in;

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
    // Logger por ciclo
    // -------------------------------
    always @(posedge clk) begin
        $display("[T=%0t] CLK ↑ | rst=%0b  en=%0b  load_en=%0b  w_in=%0d  x_in=%0d  out_safe=%0d",
                 $time, rst, en, load_en, w_in, x_in, out_safe);
    end


    // -------------------------------
    // Empurra um par (W,X)
    // -------------------------------
    task push_values;
        input signed [31:0] w;
        input signed [31:0] x;
    begin
        @(posedge clk);
        $display("    >> load_en=1 (carregando) W=%0d  X=%0d", w, x);
        load_en = 1;
        w_in = w;
        x_in = x;

        @(posedge clk);
        load_en = 0;
        $display("    >> load_en=0 (travado no shift-register)");
    end
    endtask

    // -------------------------------
    // Função p/ gerar pesos
    // -------------------------------
    function signed [31:0] gen_weight(input integer idx);
        reg signed [31:0] tmp;
    begin
        tmp = (idx*37 - idx*idx*3 + 11);
        gen_weight = tmp >>> (idx % 3);
    end
    endfunction

    // -------------------------------
    // Função p/ gerar entradas
    // -------------------------------
    function signed [31:0] gen_input(input integer idx);
        reg signed [31:0] tmp;
    begin
        tmp = (idx*17 + idx*5 - 9);
        gen_input = tmp >>> (idx % 2);
    end
    endfunction


    // -------------------------------
    // Teste principal
    // -------------------------------
    integer i;
    initial begin
        $display("\n===== TESTE neuron_wrapper =====");

        clk = 0;
        rst = 1;
        en  = 0;
        load_en = 0;
        w_in = 0;
        x_in = 0;

        repeat(3) @(posedge clk);
        rst = 0;

        // -------------------------
        // SHIFT dos N_INPUTS valores
        // -------------------------
        $display("\n--- Iniciando carregamento no shift-register ---");

        for (i = 0; i < N_INPUTS; i = i + 1) begin
            push_values(gen_weight(i), gen_input(i));

            // Mostrar conteúdo interno após carregar
            $display("    Estado do shift-register após shift[%0d]:", i);
            $display("        W: %p", dut.shift_w);
            $display("        X: %p", dut.shift_x);
        end

        $display("\n--- Shift completo! ---\n");

        // -------------------------
        // Ativa cálculo
        // -------------------------
        @(posedge clk);
        en = 1;
        $display("    >> en=1 (inicia cálculo)");

        @(posedge clk);
        en = 0;
        $display("    >> en=0 (cálculo deve estar propagando)");

        // Mostrar árvore parcial (se existir)
        $display("\n--- Estado interno após ativação ---");
        if (N_INPUTS == 4) begin
            $display("Somadores internos:");
            $display("    p0 = %0d   p1 = %0d   p2 = %0d   p3 = %0d",
                dut.prod[0], dut.prod[1], dut.prod[2], dut.prod[3]);
            $display("    s0 = %0d   s1 = %0d", dut.sum_lvl1[0], dut.sum_lvl1[1]);
            $display("    acc_final = %0d", dut.acc_out_raw);
        end

        // Espera
        repeat(4) @(posedge clk);

        // Resultado final
        $display("\nRESULTADO FINAL:");
        $display("Saída (out_safe) = %0d", out_safe);

        $display("\n===== FIM DO TESTE =====");
        $finish;
    end

endmodule
