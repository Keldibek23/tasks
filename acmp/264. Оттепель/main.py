f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())

a = f.readline().split()
    
b = 0
maxn = 0

for i in range(n):
    if (int(a[i])>0):
        b+=1
        if(maxn<b):
            maxn = b
    if (int(a[i])<=0):
        if(maxn<b):
            maxn = b
        b = 0
        
if (maxn>0):
    fc.write(str(maxn))
else:
    fc.write("0")

fc.close()
