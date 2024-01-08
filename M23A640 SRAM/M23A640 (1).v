module M23A640(
    input csb,
    output wire so,
    input holdb,
    input sck,
    input si
);

    // State definitions
    parameter IDLE = 3'b000;
    parameter CAPTURE = 3'b001;
    parameter READ_DATA = 3'b010;
    parameter WRITE_DATA = 3'b011;

    // Internal registers
    reg [2:0] state;
    reg [7:0] instruction_reg;
    reg [15:0] address_reg;
    reg [7:0] data_reg;
    reg [7:0] internal_data;
    reg reg_so_intermediate;
    reg [7:0] reg_sram_data_intermediate;
    reg [14:0] address_alias_reg;
    reg si_latched;

    always @(posedge sck) begin
        si_latched = si;
	//$display("Time: %t | si: %b | si_latched: %b", $time, si, si_latched);
    end

    reg [4:0] shift_counter;

    // SPI_Interface instantiation and connection
    wire [7:0] spi_data_out;
    wire [7:0] spi_data_in;
    wire data_ready;
    wire load_data;

    SPI_Interface spi_inst(
        .cs(csb),
        .sck(sck),
        .mosi(si_latched),
        .miso(so),
        .hold(holdb),
        .spi_out(spi_data_out),
        .spi_in(spi_data_in),
        .data_ready(data_ready),
	.load_data(load_data)
    );

    // SRAM instantiation and connection
    wire [7:0] sram_data;
    reg [12:0] sram_address;
    reg sram_write_enable, sram_read_enable;

    assign so = reg_so_intermediate;
    assign sram_data = reg_sram_data_intermediate;

    SRAM sram_inst(
        .address(sram_address),
        .data(sram_data),
        .write_enable(sram_write_enable),
        .read_enable(sram_read_enable)
    );

    // Reset logic
    always @(posedge csb or negedge csb) begin
        instruction_reg <= 8'b0;
        address_reg <= 16'b0;
        data_reg <= 8'b0;
        sram_write_enable <= 0;
        sram_read_enable <= 0;
        shift_counter <= 5'b0;
        internal_data <= 8'b0;
        reg_so_intermediate <= 1'bz;
        reg_sram_data_intermediate <= 8'bz;
        sram_address <= 13'b0;
        state <= CAPTURE;
    end

    // FSM for SPI sequences
    always @(posedge sck) begin
        case(state)
            IDLE: begin
                if (!csb) state <= CAPTURE;
            end

            CAPTURE: begin
	        if (shift_counter < 8) begin // capture instruction
    	            instruction_reg <= {instruction_reg[6:0], si_latched};
		    end else if (shift_counter >= 8 && shift_counter < 23) begin // capture address
    		        address_reg <= {address_reg[14:0], si_latched};
		    end
	        shift_counter <= shift_counter + 1;

                if (shift_counter == 23) begin
                    sram_address <= {address_reg[14:0], si_latched};
		    address_alias_reg <= address_reg * 2;
                    shift_counter <= 0;
                    if(instruction_reg[7:0] == 2'b11) begin
                        sram_read_enable <= 1;
                        state <= READ_DATA;
                    end else if(instruction_reg[7:0] == 2'b10) begin
                        state <= WRITE_DATA;
                    end
                end
            end

	    READ_DATA: begin
    	        if (shift_counter < 8) begin
        	    shift_counter <= shift_counter + 1;
    	        end else begin
        	    shift_counter <= 0;
        	    state <= IDLE;
                end
            end


	    WRITE_DATA: begin
    	        data_reg <= {data_reg[6:0], si_latched};
    	        if (shift_counter == 7) begin
        	    reg_sram_data_intermediate <= {data_reg[6:0], si_latched}; // load complete byte
        	    shift_counter <= shift_counter + 1;
		    sram_write_enable <= 1; // assert write_enable
    	        end else if (shift_counter == 8) begin
        	    sram_write_enable <= 0; // deassert write_enable
        	    shift_counter <= 0;
        	    state <= IDLE;
    	        end else begin
        	    shift_counter <= shift_counter + 1;
    	        end
	    end
        endcase
    end

    always @(negedge sck) begin
    	if (address_alias_reg > 15'h3FFF && state == READ_DATA && shift_counter < 8) begin
	reg_so_intermediate <= 1'bz;
    	end else if (state == READ_DATA && shift_counter < 8) begin
       	    reg_so_intermediate <= sram_data[7-shift_counter]; // output bit at the current shift position
    	end
    end


    //DEBUG
    /*always @(state or shift_counter or instruction_reg or address_reg or data_reg or internal_data) begin
        case(state)
            IDLE: $display("Time: %t | State: IDLE", $time);
            CAPTURE: $display("Time: %t | State: CAPTURE", $time);
            READ_DATA:  $display("Time: %t | Data prepared to read: %b", $time, internal_data);
            WRITE_DATA: $display("Time: %t | State: WRITE_DATA", $time);
        endcase

        $display("Time: %t | Shift Counter: %d", $time, shift_counter);
        $display("Time: %t | Instruction: %b", $time, instruction_reg);
        $display("Time: %t | Address: %b", $time, address_reg);
        
        if(state == WRITE_DATA) begin
            $display("Time: %t | Data written: %b", $time, data_reg);
        end
    end*/

endmodule
