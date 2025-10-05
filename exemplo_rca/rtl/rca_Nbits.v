`timescale 1ns / 1ps


module half_adder(a, b, s, cout);
    input a,b;
    output s, cout;
    assign s = a^b;
    assign cout = a & b;
endmodule

module full_adder(a, b, cin, s, cout);
    input a,b, cin;
    output s, cout; 
    assign s = (a ^ b) ^ cin;
    assign cout = (( a ^ b) & cin) | (b & a);
endmodule

module rca_Nbits(A, B, S, Cout);
    parameter N = 8;

    input signed [N-1:0] A, B;
    output signed [N-1:0] S;
    output Cout;
    wire [N-1:0] carry;
	
  	half_adder HA(
        .a(A[0]),
        .b(B[0]),
        .s(S[0]), 
        .cout(carry[0])
    ) ;

    generate

    genvar i;
    for (i = 1; i < N; i = i + 1)
        begin
            full_adder U_FA (
            .a(A[i]),
            .b(B[i]),
            .cin(carry[i-1]),
            .s(S[i]),
            .cout(carry[i])
            );
        end

    endgenerate

    assign Cout = carry[N-1];
endmodule

