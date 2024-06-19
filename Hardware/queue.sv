module queue #(
    parameter   DATA_WIDTH = 10,
                QUEUE_SIZE = 8,
                POINTER_SIZE = 3,
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

logic [DATA_WIDTH-1:0]  prev_xpixel;


// logic                   fin_wire;
// logic [RBG_SIZE-1:0]    colour_wire;
// logic [DATA_WIDTH-1:0]  xpixel_wire;
// logic [DATA_WIDTH-1:0]  ypixel_wire;

logic [POINTER_SIZE-1:0] read_pointer = 0;
logic [POINTER_SIZE-1:0] write_pointer = 0;
logic empty_queue;


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

always_ff@(posedge clk)begin // writes data on the rising edge
    if (reset) begin
        write_pointer <= 0;
    end
    else if (fin_flag && (xpixel_i != prev_xpixel)) begin
        write_pointer <= write_pointer + 1'b1;
        colour_queue[write_pointer] <= colour_i;
        xqueue[write_pointer] <= xpixel_i;
        yqueue[write_pointer] <= ypixel_i;
        prev_xpixel <= xpixel_i;
    end
end

always_ff @(negedge clk)begin // reads data on falling edge
    if (reset) begin
        read_pointer <= 0;
    end
    else if (xpixel_check == xqueue[read_pointer] && ypixel_check == yqueue[read_pointer] && en)begin
        read_pointer <= read_pointer + 1'b1;
        colour_o <= colour_queue[read_pointer];
    end
end    


always_comb begin
    // if the queue is empty
    empty_queue = (read_pointer == write_pointer);
    // if the queue is full
    full_queue = (write_pointer + 1'b1 == read_pointer);

    en = ~empty_queue;
    if (xpixel_check == xqueue[read_pointer] && ypixel_check == yqueue[read_pointer] && en)begin
        match = 1;
    end
    else begin
        match = 0;
    end
end

endmodule
