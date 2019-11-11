
// Generated by Cadence Genus(TM) Synthesis Solution 16.21-s018_1
// Generated on: Nov 12 2019 02:44:51 IST (Nov 11 2019 21:14:51 UTC)

// Verification Directory fv/screen_design 

module pixel_itr(clk, rst, pix_x, pix_y, h_sync, v_sync, draw_active,
     screen_end, draw_end);
  input clk, rst;
  output [9:0] pix_x, pix_y;
  output h_sync, v_sync, draw_active, screen_end, draw_end;
  wire clk, rst;
  wire [9:0] pix_x, pix_y;
  wire h_sync, v_sync, draw_active, screen_end, draw_end;
  wire [9:0] h_pos;
  wire n_0, n_1, n_2, n_3, n_4, n_5, n_6, n_7;
  wire n_8, n_9, n_10, n_11, n_12, n_13, n_14, n_15;
  wire n_16, n_17, n_18, n_23, n_24;
  NOR4XL g275(.A (h_pos[9]), .B (h_pos[8]), .C (n_24), .D (n_18), .Y
       (h_sync));
  MX2X1 g276(.A (n_17), .B (n_23), .S0 (h_pos[7]), .Y (n_18));
  AOI21XL g277(.A0 (h_pos[3]), .A1 (n_23), .B0 (h_pos[6]), .Y (n_17));
  AND2X1 g278(.A (h_pos[7]), .B (h_pos[6]), .Y (n_24));
  AND2X1 g279(.A (h_pos[5]), .B (h_pos[4]), .Y (n_23));
  SDFFQX1 \h_pos_reg[9] (.CK (clk), .D (n_8), .SI (h_pos[9]), .SE
       (n_16), .Q (h_pos[9]));
  SDFFQX1 \h_pos_reg[7] (.CK (clk), .D (n_2), .SI (h_pos[7]), .SE
       (n_15), .Q (h_pos[7]));
  SDFFQX1 \h_pos_reg[5] (.CK (clk), .D (n_4), .SI (h_pos[5]), .SE
       (n_12), .Q (h_pos[5]));
  SDFFQX1 \h_pos_reg[8] (.CK (clk), .D (n_0), .SI (h_pos[8]), .SE
       (n_14), .Q (h_pos[8]));
  SDFFQX1 \h_pos_reg[6] (.CK (clk), .D (n_1), .SI (h_pos[6]), .SE
       (n_13), .Q (h_pos[6]));
  SDFFQX1 \h_pos_reg[4] (.CK (clk), .D (n_6), .SI (h_pos[4]), .SE
       (n_11), .Q (h_pos[4]));
  OR2X1 g303(.A (n_0), .B (n_14), .Y (n_16));
  OR2X1 g304(.A (n_1), .B (n_13), .Y (n_15));
  NAND2BX1 g305(.AN (n_13), .B (n_24), .Y (n_14));
  SDFFQX1 \h_pos_reg[3] (.CK (clk), .D (n_5), .SI (h_pos[3]), .SE
       (n_10), .Q (h_pos[3]));
  OR2X1 g307(.A (n_6), .B (n_11), .Y (n_12));
  NAND2BX1 g308(.AN (n_11), .B (n_23), .Y (n_13));
  SDFFQX1 \h_pos_reg[2] (.CK (clk), .D (n_3), .SI (h_pos[2]), .SE
       (n_9), .Q (h_pos[2]));
  OR2X1 g310(.A (n_5), .B (n_10), .Y (n_11));
  SDFFQX1 \h_pos_reg[1] (.CK (clk), .D (h_pos[0]), .SI (n_7), .SE
       (h_pos[1]), .Q (h_pos[1]));
  OR2X1 g312(.A (n_3), .B (n_9), .Y (n_10));
  DFFQX1 \h_pos_reg[0] (.CK (clk), .D (n_7), .Q (h_pos[0]));
  NAND2XL g314(.A (h_pos[1]), .B (h_pos[0]), .Y (n_9));
  CLKINVX1 g315(.A (h_pos[9]), .Y (n_8));
  CLKINVX1 g316(.A (h_pos[0]), .Y (n_7));
  CLKINVX1 g317(.A (h_pos[4]), .Y (n_6));
  CLKINVX1 g318(.A (h_pos[3]), .Y (n_5));
  INVXL g319(.A (h_pos[5]), .Y (n_4));
  CLKINVX1 g320(.A (h_pos[2]), .Y (n_3));
  INVXL g321(.A (h_pos[7]), .Y (n_2));
  CLKINVX1 g322(.A (h_pos[6]), .Y (n_1));
  CLKINVX1 g323(.A (h_pos[8]), .Y (n_0));
endmodule

module screen_design(clk, rst, h_sync, v_sync, r_out, g_out, b_out);
  input clk, rst;
  output h_sync, v_sync, r_out, g_out, b_out;
  wire clk, rst;
  wire h_sync, v_sync, r_out, g_out, b_out;
  wire [11:0] pix_x;
  wire UNCONNECTED, UNCONNECTED0, UNCONNECTED1, UNCONNECTED2,
       UNCONNECTED3, UNCONNECTED4, UNCONNECTED5, UNCONNECTED6;
  wire UNCONNECTED7, UNCONNECTED8, UNCONNECTED9, UNCONNECTED10,
       UNCONNECTED11, UNCONNECTED12, UNCONNECTED_HIER_Z;
  assign b_out = 1'b0;
  assign g_out = 1'b0;
  assign r_out = 1'b0;
  assign v_sync = 1'b0;
  pixel_itr show(.clk (clk), .rst (UNCONNECTED_HIER_Z), .pix_x
       (pix_x[9:0]), .pix_y ({UNCONNECTED8, UNCONNECTED7, UNCONNECTED6,
       UNCONNECTED5, UNCONNECTED4, UNCONNECTED3, UNCONNECTED2,
       UNCONNECTED1, UNCONNECTED0, UNCONNECTED}), .h_sync (h_sync),
       .v_sync (UNCONNECTED9), .draw_active (UNCONNECTED10),
       .screen_end (UNCONNECTED11), .draw_end (UNCONNECTED12));
endmodule

