f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

inp = f.readline().split()

a = int(inp[0])
b = int(inp[1])

fc.write(str(b-1)+" "+str(a-1))

fc.close()
