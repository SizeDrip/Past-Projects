module SRAM(
    input [12:0] address,  // 13-bit (2^13) address for 8192 locations
    inout [7:0] data,      // 8-bit data bus
    input write_enable,    // Write enable signal (WE)
    input read_enable    // Read enable signal (RE)
);

    // Declare array of 8192 8-bit words
    reg [7:0] memory [0:8191];

    // Temporary variable to hold data
    reg [7:0] temp_data = 8'bz;

    // Initialization
    initial begin
        $display("[%0d] SRAM: Initialization", $time);
    end

    // Handle read and write ops
    always @(write_enable or read_enable) begin
        if (write_enable) begin

            $display("[%0d] SRAM: Writing to address %0h with data %0h", $time, address, data);
            memory[address] = data;
            $display("[%0d] SRAM: Write operation completed", $time);

        end else if (read_enable) begin

            $display("[%0d] SRAM: Reading from address %0h", $time, address);
            temp_data = memory[address];
            $display("[%0d] SRAM: Read data %0h from address %0h", $time, temp_data, address);

        end
    end

    // Assign bidirectional data pin
    assign data = (read_enable) ? temp_data : 8'bz; //if read is enabled, output current memory. Otherwise, z (this comes AFTER input data has been assigned to memory).

endmodule
