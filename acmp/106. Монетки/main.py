f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())

a=[]

b = 0
z = 0

for i in range(n):
    a.append(f.readline())

for i in range(n):
    if(int(a[i])==1):
        b += 1
    if (int(a[i])==0):
        z += 1


if(b<z):
    fc.write(str(b))
if(z<b):
    fc.write(str(z))

fc.close()
