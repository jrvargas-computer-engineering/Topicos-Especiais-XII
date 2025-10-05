`timescale 1ns / 1ps


module AC #(
    parameter N = 8
    ) (en, clk, rst, in, out);

    input clk,rst, en;
    input signed [(N-1):0] in;
    output signed [(N-1):0] out;
   
    reg signed [(N-1):0] ACout;

	always @ (posedge clk or negedge rst) begin
	    if(!rst) begin
    	    ACout <= 0; 
    	end
    	else if (en) begin
        	ACout <= in;
    	end 
	end
    assign out = ACout;
endmodule