module lut #(
    parameter ITERATIONS_WIDTH = 32,
    parameter RBG_SIZE = 24,
    parameter NUM_ENGINES = 8,
    parameter LUT_SIZE = 125
)(
    input logic [ITERATIONS_WIDTH-1:0]    iterations [NUM_ENGINES-1:0],
    // input logic                     clk,    
    output logic [RBG_SIZE-1:0]     rgb_val [NUM_ENGINES-1:0]
);
    
logic [RBG_SIZE-1:0] lut_array [LUT_SIZE-1:0];

int i;
initial begin
    $display("Loading lut_array.");
    lut_array[0]  = 24'h000000; // Black
    lut_array[1]  = 24'h000033; // Dark blue
    lut_array[2]  = 24'h000066; // Blue
    lut_array[3]  = 24'h000099; // Blue
    lut_array[4]  = 24'h0000CC; // Blue
    lut_array[5]  = 24'h0000FF; // Bright blue
    lut_array[6]  = 24'h0033FF; // Blue
    lut_array[7]  = 24'h0066FF; // Blue
    lut_array[8]  = 24'h0099FF; // Light blue
    lut_array[9]  = 24'h00CCFF; // Cyan
    lut_array[10] = 24'h00FFFF; // Bright cyan
    lut_array[11] = 24'h33FFCC; // Cyan
    lut_array[12] = 24'h66FF99; // Light green
    lut_array[13] = 24'h99FF66; // Green
    lut_array[14] = 24'hCCFF33; // Light green
    lut_array[15] = 24'hFFFF00; // Yellow
    lut_array[16] = 24'hFFCC00; // Orange
    lut_array[17] = 24'hFF9900; // Orange
    lut_array[18] = 24'hFF6600; // Orange
    lut_array[19] = 24'hFF3300; // Orange-red
    lut_array[20] = 24'hFF0000; // Red
    lut_array[21] = 24'hCC0000; // Dark red
    lut_array[22] = 24'h990000; // Dark red
    lut_array[23] = 24'h660000; // Dark red
    lut_array[24] = 24'h330000; // Dark red
    lut_array[25] = 24'h330033; // Dark magenta
    lut_array[26] = 24'h660066; // Magenta
    lut_array[27] = 24'h990099; // Light magenta
    lut_array[28] = 24'hCC00CC; // Light magenta
    lut_array[29] = 24'hFF00FF; // Bright magenta
    lut_array[30] = 24'hFF33CC; // Pink
    lut_array[31] = 24'hFF66CC; // Pink
    lut_array[32] = 24'hFF99CC; // Light pink
    lut_array[33] = 24'hFFCCCC; // Very light pink
    lut_array[34] = 24'hFFFFFF; // White
    lut_array[35] = 24'hFFFFCC; // Very light yellow
    lut_array[36] = 24'hFFFF99; // Light yellow
    lut_array[37] = 24'hFFFF66; // Light yellow
    lut_array[38] = 24'hFFFF33; // Light yellow
    lut_array[39] = 24'hFFFF00; // Yellow
    lut_array[40] = 24'hCCCC00; // Dark yellow
    lut_array[41] = 24'h999900; // Dark yellow
    lut_array[42] = 24'h666600; // Dark yellow
    lut_array[43] = 24'h333300; // Dark yellow
    lut_array[44] = 24'h003300; // Dark green
    lut_array[45] = 24'h006600; // Green
    lut_array[46] = 24'h009900; // Green
    lut_array[47] = 24'h00CC00; // Light green
    lut_array[48] = 24'h00FF00; // Bright green
    lut_array[49] = 24'h33FF00; // Light green
    lut_array[50] = 24'h66FF00; // Light green
    lut_array[51] = 24'h99FF00; // Light green
    lut_array[52] = 24'hCCFF00; // Light green
    lut_array[53] = 24'hFFFF00; // Yellow
    lut_array[54] = 24'hFFCC33; // Light orange
    lut_array[55] = 24'hFF9966; // Light orange
    lut_array[56] = 24'hFF6666; // Light red
    lut_array[57] = 24'hFF3333; // Light red
    lut_array[58] = 24'hFF0000; // Red
    lut_array[59] = 24'hCC0033; // Dark red
    lut_array[60] = 24'h990066; // Dark magenta
    lut_array[61] = 24'h660099; // Magenta
    lut_array[62] = 24'h3300CC; // Light magenta
    lut_array[63] = 24'h0000FF; // Bright blue
    lut_array[64] = 24'h0033FF; // Light blue
    lut_array[65] = 24'h0066FF; // Light blue
    lut_array[66] = 24'h0099FF; // Light blue
    lut_array[67] = 24'h00CCFF; // Cyan
    lut_array[68] = 24'h00FFFF; // Bright cyan
    lut_array[69] = 24'h33FFCC; // Light cyan
    lut_array[70] = 24'h66FF99; // Light green
    lut_array[71] = 24'h99FF66; // Green
    lut_array[72] = 24'hCCFF33; // Light green
    lut_array[73] = 24'hFFFF00; // Yellow
    lut_array[74] = 24'hFFCC00; // Light orange
    lut_array[75] = 24'hFF9900; // Orange
    lut_array[76] = 24'hFF6600; // Light red
    lut_array[77] = 24'hFF3300; // Orange-red
    lut_array[78] = 24'hFF0000; // Red
    lut_array[79] = 24'hCC0000; // Dark red
    lut_array[80] = 24'h990000; // Dark red
    lut_array[81] = 24'h660000; // Dark red
    lut_array[82] = 24'h330000; // Dark red
    lut_array[83] = 24'h330033; // Dark magenta
    lut_array[84] = 24'h660066; // Magenta
    lut_array[85] = 24'h990099; // Light magenta
    lut_array[86] = 24'hCC00CC; // Light magenta
    lut_array[87] = 24'hFF00FF; // Bright magenta
    lut_array[88] = 24'hFF33CC; // Light pink
    lut_array[89] = 24'hFF66CC; // Pink
    lut_array[90] = 24'hFF99CC; // Light pink
    lut_array[91] = 24'hFFCCCC; // Very light pink
    lut_array[92] = 24'hFFFFFF; // White
    lut_array[93] = 24'hFFFFCC; // Very light yellow
    lut_array[94] = 24'hFFFF99; // Light yellow
    lut_array[95] = 24'hFFFF66; // Light yellow
    lut_array[96] = 24'hFFFF33; // Light yellow
    lut_array[97] = 24'hFFFF00; // Yellow
    lut_array[98] = 24'hCCCC00; // Dark yellow
    lut_array[99] = 24'h999900; // Dark yellow
    lut_array[100] = 24'h666600; // Dark yellow
    lut_array[101] = 24'h333300; // Dark yellow
    lut_array[102] = 24'h003300; // Dark green
    lut_array[103] = 24'h006600; // Green
    lut_array[104] = 24'h009900; // Light green
    lut_array[105] = 24'h00CC00; // Light green
    lut_array[106] = 24'h00FF00; // Bright green
    lut_array[107] = 24'h33FF00; // Light green
    lut_array[108] = 24'h66FF00; // Light green
    lut_array[109] = 24'h99FF00; // Light green
    lut_array[110] = 24'hCCFF00; // Light green
    lut_array[111] = 24'hFFFF00; // Yellow
    lut_array[112] = 24'hFFCC33; // Light orange
    lut_array[113] = 24'hFF9966; // Light orange
    lut_array[114] = 24'hFF6666; // Light red
    lut_array[115] = 24'hFF3333; // Light red
    lut_array[116] = 24'hFF0000; // Red
    lut_array[117] = 24'hCC0033; // Dark red
    lut_array[118] = 24'h990066; // Dark magenta
    lut_array[119] = 24'h660099; // Magenta
    lut_array[120] = 24'h3300CC; // Light magenta
    lut_array[121] = 24'h0000FF; // Bright blue
    lut_array[122] = 24'h0033FF; // Light blue
    lut_array[123] = 24'h0066FF; // Light blue
    lut_array[124] = 24'h0099FF; // Light blue
end

always_comb begin
    for(i = 0; i < NUM_ENGINES; i++)begin
        if (iterations[i] < 125) begin
            rgb_val[i] = lut_array[iterations[i]];
        end
        else begin
            rgb_val[i] = 24'h000000; // Default to black if out of range (safety)
        end
    end
end

endmodule
