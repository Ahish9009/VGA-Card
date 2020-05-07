# VGA Card
A graphics controller using Nexys 2 FPGA with ability to display images on a VGA interfaced screen. A python script takes in an image as input and gives out the timing vs pixel RGB values for displaying the image on the screen.

## How it Works
A detailed explanation on how the card works can be found in our project report written as an IEEE styled paper ([link](IEEE_paper.pdf)).

## Features
* Max Resolution: 800x600
* Max Refresh Rate: 50MHz

## Technologies used
* Verilog
* Python (for generating PixelMap)
* Xilinx
* Cadence
* Digilent Adept

## Usage
* Use the Python scripts to generate the intermediary verilog files
* Open the existing VGA ISE project, or create a new project and add the following files to it:
  * The generated verilog file
  * [vga_card_constraints.ucf](VGA_ISE/vga_card_constraints.ucf)(The constraints file)
* Generate the bit file for the FPGA board being used
* Connect the VGA cable to the monitor and board
* Dump the generated bit file onto the board using Digilent Adept

## Authors
* [Ahish](https://github.com/Ahish9009)
* [Shivansh Rakesh](https://github.com/ShivanshRakesh)
