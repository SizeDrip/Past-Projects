module SRAM(
    input [12:0] address,
    inout [7:0] data,
    input write_enable,
    input read_enable
);

    reg [7:0] memory [0:8191];
    reg [7:0] data_out;

    // Bidirectional bus handling
    assign data = (read_enable) ? data_out : 8'bz;

    always @(posedge write_enable or posedge read_enable) begin
        if (write_enable) begin
            memory[address] <= data;
        end
        if (read_enable) begin
            data_out <= memory[address];
        end
    end

    // Ensure no contention on the data bus
    always @(*) begin
        if (!read_enable && !write_enable) begin
            data_out = 8'bz;
        end
    end
endmodule

