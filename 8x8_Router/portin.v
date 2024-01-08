module portin (
    input clock,
    input reset_n,
    input frame_n,
    input valid_n,
    input di,
    output reg [3:0] addr_from_input,
    output reg [31:0] payload_from_input,
    output reg vld_from_input
);

    // State machine states
    localparam IDLE = 0,
               READ_ADDR = 1,
               READ_PAYLOAD = 2,
               COMPLETE = 3;

    reg [1:0] state = IDLE;
    reg [2:0] addr_count;
    reg [4:0] payload_count;
    reg di_latched;

    always @(posedge clock or negedge reset_n) begin
        if (!reset_n) begin
            di_latched <= 0;
        end else begin
            di_latched <= di; // Latch di on every positive edge of the clock
        end
    end

    always @(posedge clock or negedge reset_n) begin
        if (!reset_n) begin
            // Reset logic
            addr_from_input <= 0;
            payload_from_input <= 0;
            vld_from_input <= 0;
            addr_count <= 0;
            payload_count <= 0;
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    vld_from_input <= 0;
                    if (!frame_n && valid_n) begin // Start of frame
                        state <= READ_ADDR;
                        addr_count <= 0;
                        payload_count <= 0;
                    end
                end
                READ_ADDR: begin
                    if (addr_count < 3) begin
                        addr_from_input[addr_count] <= di_latched; // Storing address in reverse order
                        addr_count <= addr_count + 1;
                    end
                    if (addr_count == 2) begin // Address fully read
                        state <= READ_PAYLOAD;
                    end
                end
                READ_PAYLOAD: begin
		    //if (!frame_n && !valid_n)
		    //begin
                        if (payload_count < 32) begin
                            payload_from_input[payload_count] <= di; // Storing payload
                            payload_count <= payload_count + 1;
                        end
                        if (payload_count == 31) begin // Payload fully read
                            state <= COMPLETE;
                        end
                    //end
		end
                COMPLETE: begin
                    vld_from_input <= 1; // Indicate valid payload
		    $display("%t: -- PORTIN COMPLETE -- Portin: Address = %h, Payload = %h, Valid = %d", $time, addr_from_input, payload_from_input, vld_from_input);
                    state <= IDLE; // Reset state for next frame
                end
            endcase
        end
    end
endmodule

