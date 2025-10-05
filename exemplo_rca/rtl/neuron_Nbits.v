module neuron_Nbits #(
    parameter WIDTH = 8,
    parameter WIDTH_MAC = 2*WIDTH
    ) (clk, rst, en, W, X, Out);


    input clk, rst, en; 
    input signed [WIDTH-1:0] W, X; 
    output [WIDTH-1:0]Out; 

    /*
    saida do mac e entrada da relu
    */
    wire signed [WIDTH_MAC-1:0] mac_wire; 

    wire[WIDTH-1:0] relu_wire; 

    mac_Nbits #(
        .WIDTH(WIDTH)
    ) mac (
        .clk(clk),
        .rst(rst),
        .en(en),
        .w(W),
        .x(X),
        .out(mac_wire)
    );

    ReLu #(
        .WIDTH(WIDTH)
    ) relu (
        .reluIn(mac_wire),
        .reluOut(relu_wire)
    );
    assign Out = relu_wire; 

endmodule


