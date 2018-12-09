`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:25:02 10/18/2018 
// Design Name: 
// Module Name:    vending 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////



module vending(
		imoney,omoney,optn,give
    );
	 
	localparam optn1 = 3'b001;
	localparam optn2 = 3'b010;
	localparam optn3 = 3'b100;
	localparam optn4 = 3'b111; //cancel order

	localparam price1 = 5'b00010100;
	localparam price2 = 5'b00100111;
	localparam price3 = 5'b00110111;
	 
	 
	 input [7:0] imoney ;  // input money
	 input [2:0] optn;			// option choosen by user
	 output reg [7:0] omoney;
	 output reg give;
	
	reg [7:0]  moneyR = 8'b0,moneyT;
	reg [2:0]  optnR = 3'b0;
	initial
			begin
					give = 1'b0;
					omoney = 8'b0;
					moneyT = 8'b0;
			end

	always @(imoney,optn)
		begin
			moneyT = imoney;
			optnR = optn;
			case(moneyT)
					8'b00000101: begin moneyR = moneyR + moneyT; end
					8'b00001010: begin moneyR = moneyR + moneyT ;end
					8'b00010100: begin  moneyR = moneyR + moneyT ;end
					default: begin omoney = moneyT; $display("this amout is not accepted"); end
			endcase
			moneyT = 8'b0;
			case(optnR)
							optn1:begin
											if(moneyR>price1)
													begin
															moneyR = moneyR-price1;
															omoney = moneyR;
															give = 1'b1;
															moneyR = 8'b0;
													end
										end
							optn2:begin
											if(moneyR>price1)
													begin
															moneyR = moneyR-price2;
															omoney = moneyR;
															give = 1'b1;
															moneyR = 8'b0;
													end
										end
							optn3:begin
											if(moneyR>price1)
													begin
															moneyR = moneyR-price3;
															omoney = moneyR;
															give = 1'b1;
															moneyR = 8'b0;
													end
										end
							optn4:begin
															omoney = moneyR;
															moneyR = 8'b0;
										end
					default: begin $display("Add more money to get your product");end
			endcase
						
		end
			
endmodule
