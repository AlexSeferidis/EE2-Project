module combinator #(
    parameter   DATA_WIDTH = 32,
                RBG_SIZE = 24,
                SCREEN_WIDTH = 640,
                SCREEN_HEIGHT = 480,
                NUM_ENGINES = 6,
                ENGINE_BITS = 3
)(
    input logic                     clk,
    input logic                     reset,
    input logic [RBG_SIZE-1:0]      colour_i [NUM_ENGINES-1:0],
    input logic [DATA_WIDTH-1:0]    xpixel_i [NUM_ENGINES-1:0],
    input logic [DATA_WIDTH-1:0]    ypixel_i [NUM_ENGINES-1:0],
    input logic                     ready,

    output logic [NUM_ENGINES-1:0]  taken,
    output logic [RBG_SIZE-1:0]     colour_o,

    // flags for pixel generator
    output logic                    first,
    output logic                    last_x,
    output logic                    last_y,
    output logic                    valid
);

initial begin
    valid = 0;
    taken = 0;
end

logic [DATA_WIDTH-1:0] next_xpixel;
logic [DATA_WIDTH-1:0] next_ypixel;

always_ff @(posedge clk) begin

    if(reset)begin
        first <= 1;
        next_xpixel <= 0;
        next_ypixel <= 0;
    end

    else begin

        if(next_ypixel >= SCREEN_HEIGHT - 1)begin
            last_y <= 1;
            next_xpixel <= 0;
            next_ypixel <= 0;
        end

        else if((next_xpixel == SCREEN_WIDTH))begin
            last_x <= 1;
            next_xpixel <= 0;
            next_ypixel <= next_ypixel + 1;
        end

        else if(ready)begin
            for(int i = 0; i < NUM_ENGINES; i++)begin
                if((xpixel_i[i] == next_xpixel)&&(ypixel_i[i] == next_ypixel))begin
                    taken[i] <= 1;
                    colour_o <= colour_i[i];
                    valid <= 1;
                    next_xpixel <= next_xpixel + 1;
                end
                else begin
                    taken[i] <= 0;
                    valid <= 0;
                end
            end
        end
    end
end

endmodule
