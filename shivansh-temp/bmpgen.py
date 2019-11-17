from PIL import Image

srcImg = "test2.jpg"
img = Image.open(srcImg)

dimX, dimY = img.size
pixelList = list(img.getdata())

scalingFactorX = 640/dimX  
scalingFactorY = 480 /dimY

xpos = 0
ypos = 0
pix_x = 0
pix_y = 0
r_xstrt = 0
g_xstrt = 0
b_xstrt = 0
r_xend = 0
g_xend = 0
b_xend = 0

r_ystrt = 0
g_ystrt = 0
b_ystrt = 0
r_yend = 0
g_yend = 0
b_yend = 0

r_prev = g_prev = b_prev = 0

threshold = 128
pixelListBinary = []
for pixel in pixelList:
    r = int(pixel[0] > threshold)
    g = int(pixel[1] > threshold)
    b = int(pixel[2] > threshold)
    pixelListBinary.append((r, g, b))

red_stmnt = ""
green_stmnt = ""
blue_stmnt = ""

for pixel in pixelListBinary:
    pix_x = pix_x + 1
    if pix_x > dimX:
        pix_x = 1
        pix_y = pix_y + 1
    # print(pix_x, pix_y, pixel[0])

    if pixel[0] == 0:
        if r_prev == 1:
            red_stmnt = red_stmnt + " (pix_x >= " + str(int(r_xstrt*scalingFactorX)) + " & pix_x <=" + str(int(r_xend*scalingFactorX)) + " & pix_y >= " + str(int(r_ystrt*scalingFactorY)) + " & pix_y <=" + str(int(r_yend*scalingFactorY)) + " ) |" 
    else:
        if r_prev == 1:
            r_xend = pix_x
            r_yend = pix_y 
        else:
            r_xstrt = pix_x
            r_ystrt = pix_y

    if pixel[1] == 0:
        if g_prev == 1:
            green_stmnt = green_stmnt + " (pix_x >= " + str(int(g_xstrt*scalingFactorX)) + " & pix_x <=" + str(int(g_xend*scalingFactorX)) + " & pix_y >= " + str(int(g_ystrt*scalingFactorY)) + " & pix_y <=" + str(int(g_yend*scalingFactorY)) + " ) |" 
    else:
        if g_prev == 1:
            g_xend = pix_x
            g_yend = pix_y 
        else:
            g_xstrt = pix_x
            g_ystrt = pix_y
    
    if pixel[2] == 0:
        if b_prev == 1:
           blue_stmnt = blue_stmnt + " (pix_x >= " + str(int(b_xstrt*scalingFactorX)) + " & pix_x <=" + str(int(b_xend*scalingFactorX)) + " & pix_y >= " + str(int(b_ystrt*scalingFactorY)) + " & pix_y <=" + str(int(b_yend*scalingFactorY)) + " ) |" 
    else:
        if b_prev == 1:
            b_xend = pix_x
            b_yend = pix_y 
        else:
            b_xstrt = pix_x
            b_ystrt = pix_y

    r_prev = pixel[0]
    g_prev = pixel[1]
    b_prev = pixel[2]

print("\n\n//---------RED---------\n\n")
print("assign r_out = " + red_stmnt[:-1] + ";")
print("\n\n//---------GREEN---------\n\n")
print("assign g_out = " + green_stmnt[:-1] + ";")
print("\n\n//---------BLUE---------\n\n")
print("assign b_out = " + blue_stmnt[:-1] + ";")
