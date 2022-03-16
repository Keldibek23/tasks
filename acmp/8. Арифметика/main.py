f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")
 
zl = f.readline().split()

a = int(zl[0])
b = int(zl[1])
c = int(zl[2])

if(a,b<=10**2 and c<=10**6):
    if (a*b==c):
        fc.write("YES")
    else:
        fc.write("NO")
fc.close()
