from PIL import Image

def scale(x):

    new = []
    for i in x:
        # print(i)
        if (i > 255/2):
            new += [1]
        else:
            new += [0]
    return new

def get_condition(x):

    cond = ''
    
    for i in range(len(x)):
        flag = 0
        start = 0
        end = 0
        for j in range(len(x[i])):

            if (flag == 0 and x[i][j]):
                start = j
                end = j
                flag = 1
            elif (flag == 1 and x[i][j]):
                end = j
            elif (flag == 1 and (not x[i][j])):
                end = j
                flag = 0
                cond += "| (pix_x >= "+str(start)+" & pix_x <= "+str(end)+" & pix_y == "+str(i)+")"
        
        if x[i][-1] == 1:
            cond += "| (pix_x >= "+str(start)+" & pix_x <= "+str(end)+" & pix_y == "+str(i)+")"

            #if x[i][j]:
                #cond += "| (pix_x == "+str(j)+" & pix_y == "+str(i) + ")"
    cond = cond.lstrip("|")
    return cond

img = Image.open("me2.png")
img = img.resize((592, 444))

pix_r = (list(img.getdata(0)))
pix_g = scale(list(img.getdata(1)))
pix_b = scale(list(img.getdata(2)))
# pix_r = scale(pix_r)
# print(list(img.getdata()))

width, height = img.size
pix_r = [pix_r[i * width:(i + 1) * width] for i in range(height)]
pix_g = [pix_g[i * width:(i + 1) * width] for i in range(height)]
pix_b = [pix_b[i * width:(i + 1) * width] for i in range(height)]

#pix_r = pix_r[:240]
#pix_g = pix_g[:240]
#pix_b = pix_b[:240]

# print(pix_b)
# to generate verilog code
# for red
cond_r = get_condition(pix_r)
cond_g = get_condition(pix_g)
cond_b = get_condition(pix_b)

with open("screen_design_optimized.v", "r") as f:
    lines = f.readlines()

newlines = []
for i in range(len(lines)):
    if lines[i].find("wire win1, win2, win3, win4;") != -1:
        newlines += [lines[i]]
        if cond_r:
            newlines += ["assign win1 = " + cond_r + ";\n"]
        else:
            newlines += ["assign win1 = 0;\n"]
        if cond_g:
            newlines += ["assign win2 = " + cond_g + ";\n"]
        else:
            newlines += ["assign win2 = 0;\n"]
        if cond_b:
            newlines += ["assign win3 = " + cond_b + ";\n"]
        else:
            newlines += ["assign win3 = 0;\n"]
    else:
        newlines += [lines[i]]

with open("screen_design_optimized_image.v", "w") as f:
    for i in newlines:
        f.write(i)







