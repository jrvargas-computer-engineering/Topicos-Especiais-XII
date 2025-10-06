module ReLu #(
    parameter WIDTH = 8
) (
    input  signed [(2*WIDTH)-1:0] reluIn,
    output       [WIDTH-1:0]      reluOut
);

    assign reluOut = (reluIn <= 0) ? {WIDTH{1'b0}} :
                     reluIn[(2*WIDTH)-1:WIDTH];

    // DEBUG: mostra o valor de entrada e saída em binário e decimal
    always @(*) begin
        $display("[ReLU] t=%0t | reluIn=%0b (%0d) -> reluOut=%0b (%0d)",
                 $time, reluIn, reluIn, reluOut, reluOut);
    end

endmodule
