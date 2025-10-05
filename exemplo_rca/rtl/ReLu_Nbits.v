module ReLu #(
    parameter WIDTH = 8,
    ) (reluIn, reluOut);

    input signed [(2*WIDTH)-1:0] reluIn,
    output [WIDTH-1:0] reluOut

    assign reluOut = (reluIn <= 0) ? '0 :
                     reluIn[WIDTH-1:0];
endmodule

