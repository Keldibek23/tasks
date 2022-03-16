f = open("INPUT.TXT","r")
n = f.readline().split()
a = int(n[0])
b = int(n[1])

fc = open("OUTPUT.TXT","w")
fc.write(str(a+b))
fc.close()
