module multiplication #(
    parameter N = 8
    )(W, X, outmult);

    input signed [N-1:0] W;
    input signed [N-1:0] X;
    output signed [(2*N):0] outmult;
    assign outmult = W * X;
endmodule

