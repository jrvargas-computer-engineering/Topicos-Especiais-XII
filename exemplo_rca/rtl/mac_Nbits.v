`timescale 1ns / 1ps

module mac_Nbits #(
    parameter WIDTH = 8,
    parameter WIDTH_MAC = 2*WIDTH
)(
    input clk,
    input rst,
    input en,
    input  signed [WIDTH-1:0] w,
    input  signed [WIDTH-1:0] x,
    output       [(WIDTH_MAC)-1:0] out
);

    // Multiplicação dobra os bits
    wire signed [(WIDTH_MAC):0] mult_wire;

    // Soma aumenta 1 bit
    wire signed [(WIDTH_MAC):0] sum_wire;

    // Acumulador (soma anterior)
    wire signed [(WIDTH_MAC):0] ac_wire;

    // Instâncias
    multiplication #(
        .N(WIDTH)
    ) mult (
        .W(w),
        .X(x),
        .outmult(mult_wire)
    );

    rca_Nbits #(
        .N((WIDTH_MAC + 1))
    ) rca (
        .A(mult_wire),
        .B(ac_wire),
        .S(sum_wire),
        .Cout()
    );

    AC #(
        .N((WIDTH_MAC + 1))
    ) acumulator (
        .en(en),
        .clk(clk),
        .rst(rst),
        .in(sum_wire),
        .out(ac_wire)
    );

    assign out = ac_wire[WIDTH_MAC:1];
  // assign out = ac_wire;
    // ==================================================
    // DEBUG SECTION
    // ==================================================
    always @(posedge clk) begin
        $display("\n[MAC] t=%0t | en=%b rst=%b", $time, en, rst);
        $display("   W       = %0b (%0d)", w, w);
        $display("   X       = %0b (%0d)", x, x);
        $display("   mult    = %0b (%0d)", mult_wire, mult_wire);
        $display("   ac_in   = %0b (%0d)", ac_wire, ac_wire);
        $display("   sum     = %0b (%0d)", sum_wire, sum_wire);
        $display("   out     = %0b (%0d)", out, out);
    end

endmodule
