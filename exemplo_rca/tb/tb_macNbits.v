`timescale 1ns / 1ps

module tb_mac_Nbits;

  localparam TB_WIDTH = 8;

  reg clk;
  reg rst;
  reg en;
  reg signed [TB_WIDTH-1:0] w, x;
  wire signed [2*TB_WIDTH-1:0] mac_out;

  // DUT
  mac_Nbits #(
      .WIDTH(TB_WIDTH)
  ) dut (
      .clk(clk),
      .rst(!rst),
      .en (en),
      .w  (w),
      .x  (x),
      .out(mac_out)
  );

  // Clock: 10 ns period
  initial clk = 0;
  always #5 clk = ~clk;

  // Fun\303\203\302\247\303\203\302\243o auxiliar para testar
  task check;
    input signed [2*TB_WIDTH-1:0] expected;
    input [127:0] msg;
    begin
      if (mac_out !== expected)
        $write("(%s): esperado = %0d, obtido = %0d (t = %0t)", msg, expected, mac_out, $time);
      else $display("OK (%s): valor = %0d (t = %0t)", msg, mac_out, $time);
      msg = 0;
    end
  endtask

  // Descomentar se quiser mais informa\303\203\302\247\303\203\302\243o durante a execu\303\203\302\247\303\203\302\243o da TB
  // Monitor
  //  initial begin
  //   $monitor("t=%0t | rst=%b en=%b w=%d x=%d out=%d", $time, rst, en, w, x, mac_out);
  // end

  // Est\303\203\302\255mulos
  initial begin
    $dumpfile("tb_mac_Nbits.vcd");
    $dumpvars(0, tb_mac_Nbits);

    // Inicializa\303\203\302\247\303\203\302\243o
    rst = 1;
    en  = 0;
    w   = 0;
    x   = 0;
    #7 rst = 0;  // libera reset antes do pr\303\203\302\263ximo posedge

    // Caso 1: acumular por 2 ciclos ---------
    // 1\303\202\302\272 ciclo: w=-3, x=2

    #3;
    w  = -3;
    x  = 2;
    en = 1;
    #10;
    check(-6, "Primeiro ciclo");

    // 2\303\202\302\272 ciclo: w=5, x=-4
    w = 5;
    x = -4;
    #10;
    check(-26, "Segundo ciclo");

    // Caso 2: Reset ativo durante a opera\303\203\302\247\303\203\302\243o ---------
    rst = 1;
    en  = 0;
    #10;
    check(0, "Teste reset");
    rst = 0;  // libera reset
    en  = 1;
    #5;
    // Realizando uma soma qualquer antes do pr\303\203\302\263ximo caso
    w = 6;
    x = -8;
    #10;
    // Caso 3: enable desligado (n\303\203\302\243o acumula) ---------
    en = 0;
    #5;
    w = -8;
    x = -4;

    #40;
    check(-48, "Teste Enable");
    #20;
    $finish;
  end

endmodule
