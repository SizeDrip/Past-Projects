module switch_fabric (
    input clock,
    input reset_n,
    input [3:0] addr_from_input [7:0],
    input [31:0] fifo_data_out [7:0],
    input fifo_empty [7:0],
    output reg [31:0] dout [7:0],
    output reg valido_n [7:0]
);

    integer i;
    reg [7:0] request; // Bit vector to store requests
    reg [31:0] fifo_data_out_latched [7:0];

    always @(posedge clock or negedge reset_n) begin
        if (!reset_n) begin
            for (i = 0; i < 8; i = i + 1) begin
                dout[i] <= 0;
		fifo_data_out_latched[i] <= 0;
                valido_n[i] <= 0;
            end
        end else begin
            // Initialize request vector and valido_n signals
            request = 0;
            for (i = 0; i < 8; i = i + 1) begin
                valido_n[i] <= 0;
		//fifo_data_out_latched[i] <= fifo_data_out[i];
                if (!fifo_empty[i]) begin
                    request[i] = 1; // Set request bit if FIFO is not empty
                end
            end

            // Check requests in priority order
            for (i = 0; i < 8; i = i + 1) begin
                if (request[i]) begin
                    // Check if the output port is available
                    if (!valido_n[addr_from_input[i]] && fifo_data_out[i] != 32'b0) begin
			    if (fifo_data_out[i] != fifo_data_out_latched[i]) begin
                        	dout[addr_from_input[i]] <= fifo_data_out[i];
                        	valido_n[addr_from_input[i]] <= 1;
                        	request[i] = 0; // Clear the request as it has been handled
				fifo_data_out_latched[i] <= fifo_data_out[i];
                        	$display("%t: Switch Routing: From Input %d to Address %h, Data = %h, Latched Data = %h, Valido_n = 1", 
                                  $time, i, addr_from_input[i], fifo_data_out[i], fifo_data_out_latched[i]);
			    end
                    end /*else begin
                        // Debug: Output port is not available
                        $display("%t: Switch Routing Blocked: From Input %d to Address %h, Data = %h, Latched Data = %h, Valido_n = 0", 
                                  $time, i, addr_from_input[i], fifo_data_out[i], fifo_data_out_latched[i]);
                    end*/
                end
            end

            // Debug: Track valido_n signals
            //$display("%t: Switch Fabric Valid_o_n Signals: %b", $time, valido_n);
        end
    end
endmodule
