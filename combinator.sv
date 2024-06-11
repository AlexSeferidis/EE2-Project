module combinator #(
    parameter   DATA_WIDTH = 32,
                RBG_SIZE = 24,
                SCREEN_WIDTH = 640,
                SCREEN_HEIGHT = 480
)(
    input logic                     clk,
    input logic                     reset,
    input logic [RBG_SIZE-1:0]      colour_i,
    input logic                     en,
    input logic                     ready,

    output logic [DATA_WIDTH-1:0]   next_xpixel,
    output logic [DATA_WIDTH-1:0]   next_ypixel,
    output logic [RBG_SIZE-1:0]     colour_o,
    
    // flags for pixel generator
    output logic                    first,
    output logic                    last_x,
    output logic                    last_y,
    output logic                    valid

);

initial valid = 0;

logic [DATA_WIDTH-1:0] xpixel;
logic [DATA_WIDTH-1:0] ypixel;

always_ff @(posedge clk) begin
    last_x <= 0;
    last_y <= 0;
    first <= 0;

    if(reset)begin
        first <= 1;
        xpixel <= 0;
        ypixel <= 0;
    end

    xpixel <= xpixel + 1;

    if(xpixel >= SCREEN_WIDTH)begin
        last_x <= 1;
        xpixel <= 0;
        ypixel <= ypixel + 1;
    end

    if(ypixel >= SCREEN_HEIGHT)begin
        last_y <= 1;
        xpixel <= 0;
        ypixel <= 0;
    end

    if((en)&&(ready))begin
        valid <= 1;
        colour_o <= colour_i;
        next_xpixel <= xpixel;
        next_ypixel <= ypixel;
    end





    // last_x <= (xpixel == SCREEN_WIDTH) ? 1 : 0;
    // last_y <= (ypixel == SCREEN_HEIGHT) ? 1 : 0;
    // first <= ((xpixel == 0) & (ypixel == 0)) ? 1: 0;

    // if(xpixel == SCREEN_WIDTH)begin
    //     last_x <= 1;
    //     xpixel <= 0;
    //     ypixel <= ypixel + 1;
    // end

    // if(ypixel == SCREEN_HEIGHT)begin // this might be wrong
    //     ypixel <= 0;
    //     xpixel <= 0;
    // end

    // if((en)&&(ready))begin
    //     colour_o <= colour_i;
    //     valid <= 1;
    //     xpixel <= xpixel + 1;
    //     next_xpixel <= xpixel;
    //     next_ypixel <= ypixel;
    // end
end

endmodule
