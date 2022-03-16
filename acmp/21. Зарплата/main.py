f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

inp = f.readline().split()

minn = int(inp[0])
maxn = int(inp[0])

for i in range(len(inp)):
    if (maxn<int(inp[i])):
        maxn = int(inp[i])
    if (minn>int(inp[i])):
        minn = int(inp[i])

fc.write(str(maxn-minn))
fc.close()
