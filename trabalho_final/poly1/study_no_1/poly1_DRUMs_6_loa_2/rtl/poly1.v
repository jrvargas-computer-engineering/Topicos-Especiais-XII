module poly1(a, b, x, y);
    input signed [7:0] a, b, x;
    output signed [15:0] y;
    wire signed [15:0] p;
    DRUMs #(16, 6) mult1 (a, x, p);
    loa #(16, 2) sum1 (p, b, y);
endmodule
