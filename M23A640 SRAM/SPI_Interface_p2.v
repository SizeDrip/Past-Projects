module SPI_Interface (
    input csb,
    input rst,
    output reg so, //MISO
    input sck,
    input si //MOSI
);

    // State definitions
    parameter IDLE = 3'b000;
    parameter CAPTURE_INSTRUCTION = 3'b001;
    parameter CAPTURE_ADDRESS = 3'b010;
    parameter READ_DATA = 3'b100;
    parameter WRITE_DATA = 3'b101;

    parameter READ_INST = 8'b00000011;
    parameter WRITE_INST = 8'b00000010;

    reg [2:0] state = IDLE;
    reg [7:0] instruction = 8'b0;
    reg [15:0] address = 16'b0; 
    reg [7:0] data = 8'b0;
    reg [7:0] memory[0:8191]; 
    integer bit_counter;
    integer i;

    always @(posedge sck or negedge csb or posedge rst) begin
        if (rst) begin
	    for (i = 0; i < 8192; i = i + 1) memory[i] = 8'b0;
            state = IDLE;
        end else if (!csb) begin
        case(state)
            IDLE: begin
            	instruction = 8'b0;
            	address = 16'b0;
            	data = 8'b0;
            	bit_counter = 0;
                state = CAPTURE_INSTRUCTION;
            end

            CAPTURE_INSTRUCTION: begin
		instruction[7-bit_counter] = si;
		bit_counter = bit_counter + 1;
                if (bit_counter > 7) begin
                    if (instruction == READ_INST || instruction == WRITE_INST) begin
                        bit_counter = 0;
                        address = 16'b0;
                        state = CAPTURE_ADDRESS;
                    end else state = IDLE;
                end
            end

            CAPTURE_ADDRESS: begin
		address[15-bit_counter] = si;
                bit_counter = bit_counter + 1;
                if (bit_counter > 15) begin
                    if (instruction == READ_INST) begin
                        data = memory[address[12:0]]; 
                        bit_counter = 0;
                        state = READ_DATA;
                    end else if (instruction == WRITE_INST) begin
                        data = 8'b0;
                        bit_counter = 0;
                        state = WRITE_DATA;
                    end
                end
            end

            READ_DATA: begin
                so = data[7-bit_counter];
		bit_counter = bit_counter + 1;
                if (bit_counter > 8)
		begin
			state = IDLE; 
		end
            end

            WRITE_DATA: begin
                data[7-bit_counter] = si;
		bit_counter = bit_counter + 1;
                if (bit_counter > 7) begin
                    memory[address[12:0]] = data; 
                    state = IDLE;
                end
            end
        endcase
    end else begin
        state = IDLE;
        bit_counter = 0;
    end
end

    //DEBUG
    always @(state or bit_counter or instruction or address or data) begin
        case(state)
            IDLE: $display("Time: %t | State: IDLE", $time);
            CAPTURE_INSTRUCTION: $display("Time: %t | State: CAPTURE_INSTRUCTION", $time);
            CAPTURE_ADDRESS: $display("Time: %t | State: CAPTURE_ADDRESS", $time);
            READ_DATA: $display("Time: %t | State: READ_DATA", $time);
            WRITE_DATA: $display("Time: %t | State: WRITE_DATA", $time);
        endcase

        $display("Time: %t | Bit Counter: %d", $time, bit_counter);
        $display("Time: %t | Instruction: %b", $time, instruction);
        $display("Time: %t | Address: %b", $time, address);
        
        if(state == WRITE_DATA) begin
            $display("Time: %t | Data written: %b", $time, data);
        end

        if(state == READ_DATA) begin
            $display("Time: %t | Data retrieved: %b", $time, so);
        end
    end

endmodule
