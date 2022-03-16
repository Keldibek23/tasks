f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

a = f.readline().split()

n = int(a[0])*int(a[1])*int(a[2])*2
fc.write(str(n))
fc.close()
