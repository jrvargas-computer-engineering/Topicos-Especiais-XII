module poly1(a, b, x, y);
    input signed [7:0] a, b, x;
    output signed [15:0] y;
    wire signed [15:0] p;
    LOBA0s #(16, 4) mult1 (a, x, p);
    eta1 #(16, 1) sum1 (p, b, y);
endmodule
