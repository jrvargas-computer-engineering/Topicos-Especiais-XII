`timescale 1ns / 1ps

module AC #(
    parameter N = 8
)(
    input  clk,
    input  rst,
    input  en,
    input  signed [(N-1):0] in,
    output signed [(N-1):0] out
);

    reg signed [(N-1):0] ACout;

    // Acumulador síncrono (reset ativo baixo)
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            ACout <= 0;
            $display("[AC] t=%0t | RESET ativo -> ACout zerado", $time);
        end
        else if (en) begin
            ACout <= in;
            $display("[AC] t=%0t | en=1 | in=%0b (%0d) -> ACout=%0b (%0d)",
                     $time, in, in, ACout, ACout);
        end
        else begin
            $display("[AC] t=%0t | en=0 | mantém ACout=%0b (%0d)",
                     $time, ACout, ACout);
        end
    end

    assign out = ACout;

endmodule
