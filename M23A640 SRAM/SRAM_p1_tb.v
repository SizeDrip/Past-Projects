module SRAM_tb;

    // Testbench signals
    reg [12:0] tb_address;
    wire [7:0] tb_data;          // bidirectional
    wire [7:0] tb_read_data;     // captures data during reads
    reg [7:0] tb_write_data;     // drive data during writes
    reg tb_write_enable;
    reg tb_read_enable;

    // Drive tb_data conditionally
    assign tb_data = (tb_write_enable) ? tb_write_data : 8'bz; //if tb_write is enabled, tb_data = tb_write_data

    // Capture read data
    assign tb_read_data = (tb_read_enable) ? tb_data : 8'bz; //if tb_read is enabled, tb_data is tb_read_data

    // Instantiate SRAM module
    SRAM uut (
        .address(tb_address),
        .data(tb_data),
        .write_enable(tb_write_enable),
        .read_enable(tb_read_enable)
    );

    // Test scenarios
    initial begin

        // Write values to addresses
        tb_address = 0;
        tb_write_data = 8'hA5;
        tb_write_enable = 1;
        tb_read_enable = 0;
        #10; 

        tb_address = 1;
        tb_write_data = 8'h5A;
        #10;

        // Read values from addresses
        tb_address = 0;
        tb_write_enable = 0;
        tb_read_enable = 1;
        #10; 

        tb_address = 1;
        #10;

        $finish;
    end

    // Monitor statements
    initial begin
        $monitor("At time %0d: Address=%0d, Write Data=%0h, Read Data=%0h, WE=%b, RE=%b", $time, tb_address, tb_write_data, tb_read_data, tb_write_enable, tb_read_enable);
    end

endmodule

