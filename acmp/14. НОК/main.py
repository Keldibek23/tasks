from fractions import gcd
f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")
 
zl = f.readline().split()

a = int(zl[0])
b = int(zl[1])

n = a*b/gcd(a,b)

fc.write(str(int(n)))

fc.close()
