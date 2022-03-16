f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")
n = int(f.readline())

m = 9-n

fc.write(str(n)+"9"+str(m))

fc.close()
