module poly1(a, b, x, y);
    input signed [7:0] a, b, x;
    output signed [15:0] y;
    wire signed [15:0] p;
    DRUMs #(16, 5) mult1 (a, x, p);
    trunc0 #(16, 3) sum1 (p, b, y);
endmodule
