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
    wire [(N-1):0] carry;
	
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





module multiplication #(
    parameter N = 8
    )(W, X, outmult);

    input signed [N-1:0] W;
    input signed [N-1:0] X;
    output signed [(2*N)-1:0] outmult;
    assign outmult = W * X;
endmodule



module AC #(
    parameter N = 8
    ) (en, clk, rst, in, out);

    input clk,rst, en;
    input signed [(N-1):0] in;
    output signed [(N-1):0] out;
   
    reg signed [(N-1):0] ACout;

	always @ (posedge clk or posedge rst) begin // <-- CORRETO
	    if(rst) begin
    	    ACout <= 0; 
    	end
    	else if (en) begin
        	ACout <= in;
    	end 
	end
    assign out = ACout;
endmodule




module mac_Nbits #(
    parameter WIDTH = 8
    )(clk, rst, en, w, x, out);

    input clk, rst, en; 
    input signed [WIDTH-1:0 ]w, x;
    output [(2*WIDTH)-1:0] out; 


    /* 
    multiplicacao dobra os bits
    */
    wire signed [(2*WIDTH)-1:0] mult_wire; 
    /*
    soma aumenta 1 bit
    */
    wire signed [(2*WIDTH):0] sum_wire;

    wire signed [(2*WIDTH):0] ac_wire;

    multiplication #(
        .N(WIDTH)
    ) mult (
        .W(w),
        .X(x),
        .outmult(mult_wire)
    );

    rca_Nbits #(
      .N((2*WIDTH))
    ) rca (
        .A(mult_wire),
        .B(ac_wire),
        .S(sum_wire),
        .Cout()
    );

    AC #(
      .N((2*WIDTH))
    ) acumulator (
        .en(en),
        .clk(clk),
        .rst(rst), 
        .in(sum_wire),
        .out(ac_wire)
    );

    assign out = ac_wire; 
endmodule





//no arquivo contraints 

//create_clock -name clock -period 10 [get_ports clkz]

//no arquivo contraints 

//create_clock -name clock -period 10 [get_ports clkz]



/*
Considerando a função ReLU apresentada anteriormente, desenvolva um módulo para a
função ReLU. A entrada terá 2N bits, e a saída deve ser de N bits. Cada dupla/trio deve
escolher como realizar esse ajuste. Após, gere um módulo maior chamado
neuron_Nbits.v, no qual a saída do MAC é ligada à entrada do módulo ReLU, conforme a

module ReLu #(
    parameter N = 8
    )( reluIn, reluOut);

    input signed reluIn [(2*N)-1:0];
    output reluOut [N-1:0];

module ReLu #(
    parameter N = 8
) (
    input  signed [(2*N)-1:0] reluIn,
    output logic  [N-1:0]     reluOut
);

    assign reluOut = (reluIn <= 0) ? '0 :
                     reluIn[N-1:0];

endmodule
*/