module router (
    input clock, reset_n,
    input [7:0] frame_n,
    input [7:0] valid_n,
    input [7:0] di,
    output [7:0] dout,
    output [7:0] valido_n,
    output [7:0] frameo_n
);

    wire [3:0] addr_from_input [7:0];
    wire [31:0] payload_from_input [7:0];
    wire vld_from_input [7:0];
    wire [31:0] fifo_data_out [7:0];
    wire fifo_full [7:0];
    wire fifo_empty [7:0];
    wire [7:0] fifo_read_enable; // Control signal for FIFO read generated internally in switch_fabric

    wire [31:0] dout_switch[7:0];        // Data out from switch fabric
    wire valido_n_switch[7:0];    // Valid out signals from switch fabric
    //wire data_transmitted[7:0];
    wire [7:0] pop_switch[7:0];  // Pop signals from portout modules

    // Instantiate portin and fifo modules
    genvar i;
    generate
        for (i = 0; i < 8; i = i + 1) begin : inst
            portin portin_module (
                .clock(clock),
                .reset_n(reset_n),
                .frame_n(frame_n[i]),
                .valid_n(valid_n[i]),
                .di(di[i]),
                .addr_from_input(addr_from_input[i]),
                .payload_from_input(payload_from_input[i]),
                .vld_from_input(vld_from_input[i])
            );

            fifo fifo_inst (
                .clock(clock),
                .reset_n(reset_n),
                .write_enable(vld_from_input[i]),
                .read_enable(fifo_read_enable[i]),
                .data_in(payload_from_input[i]),
                .data_out(fifo_data_out[i]),
                .full(fifo_full[i]),
                .empty(fifo_empty[i])
            );
            portout portout_module (
                .clock(clock),
                .reset_n(reset_n),
                .din(dout_switch[i]),
                .vld(valido_n_switch[i]),
                .dout(dout[i]),
                .frame_n(frameo_n[i]),
                .valid_n(valido_n[i]),
                .pop(fifo_read_enable[i])
            );
        end
    endgenerate

    // Instantiate the switch fabric
    switch_fabric switch_inst (
        .clock(clock),
        .reset_n(reset_n),
        .addr_from_input(addr_from_input),
        .fifo_data_out(fifo_data_out),
        .fifo_empty(fifo_empty),
        .dout(dout_switch),
        .valido_n(valido_n_switch)
    );

endmodule
