module queue_new #(
    parameter   DATA_WIDTH = 32,
                QUEUE_SIZE = 10,
                COUNTER_SIZE = 4,
                RBG_SIZE = 24,
                ENGINE_BITS = 3
)(
    input logic                     clk,
    input logic                     reset,
    // received from the engine
    input logic                     fin_flag,
    input logic [RBG_SIZE-1:0]      colour_i,
    input logic [DATA_WIDTH-1:0]    xpixel_i,
    input logic [DATA_WIDTH-1:0]    ypixel_i,
    input logic                     taken,

    // output logic [ENGINE_BITS-1:0]  identity    // identify which queue this is
    output logic [RBG_SIZE-1:0]     colour_o,
    output logic [DATA_WIDTH-1:0]   xpixel_o,
    output logic [DATA_WIDTH-1:0]   ypixel_o,
    output logic                    full_queue              
);

logic [RBG_SIZE-1:0]        colour_queue    [QUEUE_SIZE-1:0];
logic [DATA_WIDTH-1:0]      xqueue          [QUEUE_SIZE-1:0];
logic [DATA_WIDTH-1:0]      yqueue          [QUEUE_SIZE-1:0];
logic [COUNTER_SIZE-1:0]    counter;
logic                       taken_wire;

logic [DATA_WIDTH-1:0] prev_xpixel;

initial begin
    prev_xpixel = -1;
    xpixel_o = -1;
    ypixel_o = -1;
    for(int i = 0; i < QUEUE_SIZE; i++)begin
        colour_queue[i] = 0;
        xqueue[i] = -1;
        yqueue[i] = -1;
    end
end

always_ff @(posedge clk)begin

    if(reset) begin
        counter <= 0;
        for(int i = 0; i < QUEUE_SIZE; i++)begin
            colour_queue[i] <= 0;
            xqueue[i] <= -1;
            yqueue[i] <= -1;
        end
    end

    else begin
        if(taken)begin
            taken_wire <= 1;
        end
        if((fin_flag)&&(xpixel_i != prev_xpixel))begin // if the new incoming xpixel is the same as the previous xpixel, ignore it
            prev_xpixel <= xpixel_i;
            colour_queue[counter] <=  colour_i;
            xqueue[counter] <= xpixel_i;
            yqueue[counter] <= ypixel_i;
            counter <= counter + 1;
        end
        else if(taken_wire)begin
            for(int i = 0; i < QUEUE_SIZE-1; i++)begin                    
                colour_queue[i] <= colour_queue[i + 1];
                xqueue[i] <= xqueue[i+1];
                yqueue[i] <= yqueue[i+1]; 
            end
            counter <= counter - 1;
            taken_wire <= 0;
        end

        else if(xqueue[0] != -1)begin
            xpixel_o <= xqueue[0];
            ypixel_o <= yqueue[0];
            colour_o <= colour_queue[0];
        end 
    end
end

always_comb begin
    if(counter == QUEUE_SIZE)begin
        full_queue = 1;
    end
    else if (counter == 0) begin
        full_queue = 0;
    end
    else begin
        full_queue = 0;
    end
end

endmodule
