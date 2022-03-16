f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())

a = f.readline().split()
    
minn = int(a[0])
maxn = int(a[0])

for i in range(n):
    if (maxn<int(a[i])):
        maxn = int(a[i])
    if (minn>int(a[i])):
        minn = int(a[i])

fc.write(str(minn)+" "+str(maxn))
fc.close()
