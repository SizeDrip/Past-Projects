module SPI_Interface (
    input wire cs,
    input wire sck,
    input wire mosi,
    output wire miso,
    input wire hold,
    output wire [7:0] spi_out,
    input wire [7:0] spi_in,
    output wire data_ready,
    input wire load_data
);

    reg [7:0] shift_register = 8'b0;
    reg data_ready_r = 1'b0;
    reg [2:0] bit_counter;

//posedge of sck: READ
always @(posedge sck or negedge cs) begin
    if (!cs) begin
        shift_register <= 8'b0;
        data_ready_r <= 1'b0;
        bit_counter <= 3'b0;
    end else if (!hold) begin
        shift_register <= {shift_register[6:0], mosi};
        bit_counter <= bit_counter + 1;
        if (bit_counter == 3'b111) begin
            data_ready_r <= 1'b1;
        end
    end
end

    //negedge of sck: WRITE
    always @(negedge sck or negedge cs) begin
        if (!cs) begin
            shift_register <= 8'b0;
        end else if (!hold && cs == 0) begin
        end
    end

    always @(posedge load_data) begin
        shift_register <= spi_in;
    end

    // output the entire shift_register on spi_out
    assign spi_out = shift_register;

    assign data_ready = data_ready_r;

endmodule

