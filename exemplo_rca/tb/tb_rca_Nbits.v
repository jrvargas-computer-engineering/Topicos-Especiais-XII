// Code your testbench here
// or browse Examples
`timescale 1ns/1ps

module tb_rca_NBits;

    parameter N = 8;

    reg signed  [N-1:0] A, B;
    wire signed [N-1:0] Sum;
    wire         Cout;

    integer i;  // loop counter
    integer errors;

    // Instantiate the DUT
    rca_Nbits #(.N(N)) uut (
        .A(A),
        .B(B),
        .S(Sum),
        .Cout(Cout)
    );

    initial begin
        $display("Starting RCA random test with %d-bit inputs", N);
        errors = 0;
        for (i = 0; i < 100; i = i + 1) begin
            // Generate random inputs (truncated to N bits)
            A = $random;
            B = $random;
            // TODO: implementar logica de testes aqui
           	#10 
        
          if ({Cout, Sum} !== (A + B))
            errors = errors + 1; 
          
        
        end
      
      if (errors > 0)
        $display("Errouuuu");
        
      else
        $display("Sucesso");

        $finish;
    end
endmodule
