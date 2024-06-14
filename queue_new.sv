module queue_new #(
    parameter   DATA_WIDTH = 32,
                QUEUE_SIZE = 10,
                COUNTER_SIZE = 4,
                RBG_SIZE = 24
)(
    input logic                     clk,
    input logic                     reset,
    input logic                     fin_flag,
    // received from the engine
    input logic [RBG_SIZE-1:0]      colour_i,
    input logic [DATA_WIDTH-1:0]    xpixel_i,
    input logic [DATA_WIDTH-1:0]    ypixel_i,

    //received from the comibinator to check if front of queue is the next coord
    input logic [DATA_WIDTH-1:0]    xpixel_check,
    input logic [DATA_WIDTH-1:0]    ypixel_check,

    output logic [RBG_SIZE-1:0]     colour_o,
    output logic                    full_queue,      // this flag will go to the distributor
    output logic                    en,
    output logic                    match
);

logic [RBG_SIZE-1:0] colour_queue [QUEUE_SIZE-1:0];
logic [DATA_WIDTH-1:0] xqueue [QUEUE_SIZE-1:0];
logic [DATA_WIDTH-1:0] yqueue [QUEUE_SIZE-1:0];
logic [COUNTER_SIZE-1:0] counter;

logic [DATA_WIDTH-1:0]  prev_xpixel;
// logic                   fin_wire;
// logic [RBG_SIZE-1:0]    colour_wire;
// logic [DATA_WIDTH-1:0]  xpixel_wire;
// logic [DATA_WIDTH-1:0]  ypixel_wire;

initial begin
    prev_xpixel = -1;
    en = 0;
    match = 0;
    for(int i = 0; i < QUEUE_SIZE; i++)begin
        colour_queue[i] = 0;
        xqueue[i] = -1;
        yqueue[i] = -1;
    end
end

always_ff@(posedge clk)begin // reads data on the rising edge

    if(reset)begin
        // en <= 0;
        counter <= 0;
        for(int i = 0; i < QUEUE_SIZE; i++)begin
            colour_queue[i] <= 0;
            xqueue[i] <= -1;
            yqueue[i] <= -1;
        end
    end

    else begin
        if((fin_flag)&&(xpixel_i != prev_xpixel))begin
            prev_xpixel <= xpixel_i;
            colour_queue[counter] <=  colour_i;
            xqueue[counter] <= xpixel_i;
            yqueue[counter] <= ypixel_i;
            counter <= counter + 1;
        end
    end
end

always_ff @(negedge clk)begin // writes data on falling edge
  
    if((xpixel_check == xqueue[0])&&(ypixel_check == yqueue[0]))begin
        // match <= 1;
        colour_o <= colour_queue[0];
        for(int i = 0; i < QUEUE_SIZE-1; i++)begin                    
            colour_queue[i] <= colour_queue[i + 1];
            xqueue[i] <= xqueue[i+1];
            yqueue[i] <= yqueue[i+1]; 
        end
        xqueue[QUEUE_SIZE-1] <= -1;
        yqueue[QUEUE_SIZE-1] <= -1;
        counter <= counter - 1;
    end 
end    


always_comb begin
    if(xqueue[0] != -1) begin
        en = 1;
    end
    else begin
        en = 0;
    end
    if(counter == QUEUE_SIZE)begin
        full_queue = 1;
    end
    else if (counter == 0) begin
        en = 0;
        full_queue = 0;
    end
    else begin
        full_queue = 0;
    end
    if((xpixel_check == xqueue[0])&&(ypixel_check == yqueue[0]))begin
        match = 1;
    end
    else begin
        match = 0;
    end
end

endmodule
