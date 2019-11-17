from PIL import Image

def scale(x):

    new = []
    for i in x:
        # print(i)
        if (i > 255/3):
            new += [1]
        else:
            new += [0]
    return new

def get_condition(x):

    cond = ''

    for i in range(len(x)):
        for j in range(len(x[i])):
            if x[i][j]:
                cond += "| (pix_x == "+str(i)+" & pix_y == "+str(j) + ")"
    cond = cond.lsrtip("|")
    return cond

img = Image.open("try.png")
img = img.resize((640,480))

pix_r = (list(img.getdata(0)))
pix_g = scale(list(img.getdata(1)))
pix_b = scale(list(img.getdata(2)))
# pix_r = scale(pix_r)
# print(list(img.getdata()))

width, height = img.size
pix_r = [pix_r[i * width:(i + 1) * width] for i in range(height)]
pix_g = [pix_g[i * width:(i + 1) * width] for i in range(height)]
pix_b = [pix_b[i * width:(i + 1) * width] for i in range(height)]

# print(pix_b)
# to generate verilog code
# for red
cond_r = get_condition(pix_r)
cond_g = get_condition(pix_g)
cond_b = get_condition(pix_b)
