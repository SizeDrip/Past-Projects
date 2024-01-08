module portout (
    input clock,
    input reset_n,
    input [31:0] din,
    input vld, // Latch this
    output reg dout,
    output reg frame_n,
    output reg valid_n,
    output reg pop
    //output reg data_transmitted
);

    reg [4:0] count;
    reg [31:0] temp, din_prev;
    reg state;
    reg vld_latched;

    always @(posedge clock or negedge reset_n) begin
        if (!reset_n) begin
            vld_latched <= 0;
            din_prev <= 0;
            temp <= 0;
            count <= 0;
            pop <= 1;
            frame_n <= 1;
            valid_n <= 1;
            state <= 0;
            dout <= 0;
        end else begin
            vld_latched <= vld;
            if (vld_latched && !state && din != 32'b0) begin // Check for new data
                $display("%t: Portout: Din = %h", $time, din);
                temp <= din;
                count <= 0;
                state <= 1; // Begin serialization
                pop <= 0; // Read from FIFO
            end else if (state) begin
                // Serialization process
                frame_n <= 0;
                valid_n <= 0;
                dout <= temp[count];
                count <= count + 1;
                if (count == 31) begin // Completed serialization
                    state <= 0;
                    frame_n <= 1;
                    valid_n <= 1;
                    pop <= 1;
                    $display("%t: Portout: Serialization of %h completed.", $time, temp);
                end
            end
        end
    end
endmodule

