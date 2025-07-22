`timescale 1ns/1ps

module pipeline_registers #(parameter WIDTH = 32) (
    input  logic               clk,
    input  logic               rst_n,
    input  logic               enable,
    input  logic               flush,
    input  logic [WIDTH-1:0]   d,
    output logic [WIDTH-1:0]   q
);

    logic [WIDTH-1:0] q_reg;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            q_reg <= '0;
        else if (flush)
            q_reg <= '0;
        else if (enable)
            q_reg <= d;
    end

    assign q = q_reg;

endmodule
