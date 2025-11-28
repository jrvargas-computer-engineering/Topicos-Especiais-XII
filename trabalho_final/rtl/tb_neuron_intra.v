`timescale 1ns / 1ps
`include "neuron_intra_Nbits.v"

module tb_neuron_intra;

  parameter N      = 8;  // bitwidth
  parameter N_INPUTS  = 4;  // number of (W,X) 

  // Entradas
  reg clk;
  reg rst;
  reg en;
  reg signed [N*N_INPUTS-1:0] W;  // packed vector: N_INPUTS of N bits
  reg signed [N*N_INPUTS-1:0] X;

  // Saída
  wire signed [N-1:0] Out;

  // Instância do DUT
  neuron_intra_Nbits #(
      .N(N),
      .N_INPUTS(N_INPUTS)   // <-- adapt your DUT to also accept N_INPUTS as parameter
  ) uut (
      .clk(clk),
      .rst(rst),
      .en (en),
      .W  (W),
      .X_N(X),
      .Out(Out)
  );

  // Clock
  initial clk = 0;
  always #5 clk = ~clk;

  // Aux task
  task check;
    input signed [N-1:0] esperado;
    input [127:0] msg;
    begin
      if (Out !== esperado)
        $display("ERRO @%0t: %s | Esperado=%0d, Obtido=%0d", $time, msg, esperado, Out);
      else $display("OK   @%0t: %s | Saida=%0d", $time, msg, Out);
    end
  endtask

  // Helper to set W[i], X[i]
  task set_pair;
    input integer idx;
    input signed [N-1:0] w_val;
    input signed [N-1:0] x_val;
    begin
      W[idx*N +: N] = w_val;  // slice assignment
      X[idx*N +: N] = x_val;
    end
  endtask

  integer i;

  initial begin
    // Inicialização
    rst  = 1;
    en   = 0;
    W    = 0;
    X    = 0;

    // Libera reset
    #12 rst = 0;
    en   = 1;

    // Caso 1: todas entradas positivas
    set_pair(0, 2, 3);  // 6
    set_pair(1, 1, 4);  // 4
    set_pair(2, 3, 2);  // 6
    set_pair(3, 2, 1);  // 2
    #10;
    check(18, "ReLU mantem");

    // Caso 2: soma negativa
    set_pair(0, -5, 3);  // -15
    set_pair(1, -4, 2);  // -8
    set_pair(2, -1, 1);  // -1
    set_pair(3,  2, 2);  // +4
    #10;
    check(0, "ReLU zera saida");

    // Caso 3: mistura sinais, resultado positivo
    set_pair(0,  5,  5);   // 25
    set_pair(1, -2,  4);   // -8
    set_pair(2,  3, -3);   // -9
    set_pair(3,  1,  6);   // +6
    #10;
    check(14, "Soma mista");

    // Caso 4: reset no meio da operação
    rst = 1;
    #5;
    rst = 0;
    for (i = 0; i < N_INPUTS; i = i + 1)
      set_pair(i, 1, 1);  // soma = 4
    #10;
    check(4, "fim");

    $display("Simulacao finalizada.");
    #10 $finish;
  end

endmodule