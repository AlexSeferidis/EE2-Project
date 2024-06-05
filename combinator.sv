module combinator #(
    parameter   DATA_WIDTH = 32,
                RBG_SIZE = 24,
                SCREEN_WIDTH = 640,
                SCREEN_HEIGHT = 480,
)(
    input logic                     clk,
    input logic                     reset,
    input logic [RBG_SIZE-1:0]      colour_i,
    input logic                     en,

    output logic [DATA_WIDTH-1:0]   next_xpixel,
    output logic [DATA_WIDTH-1:0]   next_ypixel,
    output logic [RBG_SIZE-1:0]     colour_o;
);

logic [DATA_WIDTH-1:0] xcount;
logic [DATA_WIDTH-1:0] ycount;

always_ff @(posedge clk) begin
    if(reset)begin
        xcount <= 0;
        ycount <= SCREEN_HEIGHT;
    end
    if(xcount == SCREEN_WIDTH)begin
        xcount <= 0;
        ycount <= ycount - 1;
    end
    if(ycount == 0)begin
        ycount <= SCREEN_HEIGHT;
        xcount <= 0;
    end
    if(en)begin
        next_xpixel <= xcount;
        next_ypixel <= ycount;
        colour_o <= colour_i;
        xcount <= xcount + 1;
    end
end

endmodule
