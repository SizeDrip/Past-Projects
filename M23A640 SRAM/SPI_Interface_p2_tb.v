module SPI_Interface_tb;

    reg csb;
    reg sck;
    reg si;
    wire so;
    reg rst;

    // Instantiate the SPI_Interface
    SPI_Interface_OLD uut (
        .csb(csb),
	    .rst(rst),
        .sck(sck),
        .si(si),
        .so(so)
    );

    integer i;

    // Clock generator
    always begin
        sck = ~sck;
        #10; // Maintain the clock period as 20
    end

    initial begin
        // Initialize signals
        sck = 0;
        csb = 1;
        si = 0;
	    rst = 1;
	    #20;
	    rst = 0;

        // Wait for a few clock cycles
        #40; // Two clock cycles

	    // Write sequence: 00000010 00000001 10101010 10101011
	    csb = 0; #10;

	    // Write instruction
	    sck = 0; si = 0; #10; //7
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //6
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //5
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //4
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //3
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //2
	    sck = 1; #10;
	    sck = 0; si = 1; #10; //1
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //0
	    sck = 1; #10;

	    // Write address MSB
	    sck = 0; si = 0; #10; //15
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //14
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //13
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //12
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //11
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //10
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //9
	    sck = 1; #10;
	    sck = 0; si = 1; #10; //8
	    sck = 1; #10;

	    // Write address LSB
	    sck = 0; si = 1; #10; //7
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //6
	    sck = 1; #10;
	    sck = 0; si = 1; #10; //5
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //4
	    sck = 1; #10;
	    sck = 0; si = 1; #10; //3
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //2
	    sck = 1; #10;
	    sck = 0; si = 1; #10; //1
	    sck = 1; #10;
	    sck = 0; si = 0; #10; //0
	    sck = 1; #10;

	    // Write Data
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    csb = 1; #10;

            // Wait for a few clock cycles
            #40; // Two clock cycles

            // Read sequence: 00000011 00000001 10101010: instruction --> 16-bit address
            csb = 0; #10;
	    //sck = 1; #10;

            // Read instruction
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;

            // Read address MSB
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;

	    // Read address LSB
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;
	    sck = 0; si = 1; #10;
	    sck = 1; #10;
	    sck = 0; si = 0; #10;
	    sck = 1; #10;

	    #160;
	    csb = 1; #10;

        $finish;
    end

endmodule

