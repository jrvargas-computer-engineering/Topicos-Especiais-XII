`timescale 1ns / 1ps

module mac_Nbits #(
    parameter WIDTH = 8,
    parameter WIDTH_MAC = 2*WIDTH
    )(clk, rst, en, w, x, out);

    input clk, rst, en; 
    input signed [WIDTH-1:0]w, x;

    /*
    saida especificada
    */
    output [(WIDTH_MAC)-1:0] out; 


    /* 
    multiplicacao dobra os bits
    aumenta um bit para combinar com o rca
    */

    
    //WIDTH_MAC + 1
    wire signed [(WIDTH_MAC):0] mult_wire; 
    
    /*
    soma aumenta 1 bit
    */
    //WIDTH_MAC + 1
    wire signed [(WIDTH_MAC):0] sum_wire;

    //WIDTH_MAC + 1
    wire signed [(WIDTH_MAC):0] ac_wire;

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
        .A(mult_wire), //para ser 2N + 1
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
endmodule




