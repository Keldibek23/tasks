f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

inp = f.readline().split()

n = []

a = int(inp[0])
b = int(inp[1])
c = int(inp[2])
d = int(inp[3])

for i in range(-100,101):
    if (a*(i**3)+b*(i**2)+c*(i)+d == 0):
        n.append(i)

for i in n:
    fc.write(str(i)+" ")

fc.close()
