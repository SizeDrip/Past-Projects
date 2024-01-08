module fifo (
    input clock,
    input reset_n,
    input write_enable,
    input read_enable,
    input [31:0] data_in,
    output reg [31:0] data_out,
    output reg full,
    output reg empty
);

    localparam FIFO_DEPTH = 10;
    localparam READ_DELAY = 32; // Number of clock cycles to hold data_out
    reg [31:0] buffer[FIFO_DEPTH-1:0];
    reg [3:0] write_ptr, read_ptr;
    reg [4:0] count;
    reg [5:0] delay_counter; // Delay counter
    integer i;

    always @(posedge clock or negedge reset_n) begin
        if (!reset_n) begin
            // Reset logic
            write_ptr <= 0;
            read_ptr <= 0;
            count <= 0;
            empty <= 1;
            full <= 0;
            data_out <= 32'b0;
            delay_counter <= 32;
            for (i = 0; i < FIFO_DEPTH; i = i + 1) begin
                buffer[i] <= 32'b0;
            end
        end else begin
            // Write operation
            if (write_enable && !full) begin
                buffer[write_ptr] <= data_in;
                write_ptr <= (write_ptr + 1) % FIFO_DEPTH;
                count <= count + (count < FIFO_DEPTH ? 1 : 0);
		 $display("%t: FIFO Write: Data = %h, Write Ptr = %d, Count = %d", $time, data_in, write_ptr, count);
            end
            
            // Read operation with delay
            if (read_enable && !empty && buffer[read_ptr] != 32'b0) begin
                if (delay_counter == 0) begin
                    data_out <= buffer[read_ptr];
                    read_ptr <= (read_ptr + 1) % FIFO_DEPTH;
                    count <= count - (count > 0 ? 1 : 0);
		    $display("%t: FIFO Read: Data = %h, Read Ptr = %d, Count = %d", $time, data_out, read_ptr, count);
                    delay_counter <= READ_DELAY; // Reset delay counter
                end else begin
                    delay_counter <= delay_counter - 1; // Countdown
                end
            end
	    if (!read_enable && !empty && buffer[read_ptr] != 32'b0) begin
		delay_counter <= delay_counter - 1;
	    end

            // Update full and empty flags
            full <= (count == FIFO_DEPTH);
            empty <= (count == 0);
        end
    end
endmodule

