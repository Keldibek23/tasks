f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())
cifry = f.readline().split()

minn = int(cifry[0])
maxn = int(cifry[0])
sumn = 0
prn = 1
x = 0
y = 0

for i in range(n):
    if (int(cifry[i])>0):
        sumn += int(cifry[i])
        
    if (minn<int(cifry[i])):
        minn = int(cifry[i])
        x = i
    if (maxn>int(cifry[i])):
        maxn = int(cifry[i])
        y = i
    
if (x>y):
    x = x+y
    y = x-y
    x = x-y

for i in range(x+1,y):
    prn *= int(cifry[i])

fc.write(str(sumn)+" "+str(prn))

fc.close()
