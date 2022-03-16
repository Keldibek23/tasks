f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")
 
zl = f.readline().split()
maxn = 0
for i in range(len(zl)):
    if (maxn<int(zl[i])):
        maxn = int(zl[i])

fc.write(str(maxn))

fc.close()
