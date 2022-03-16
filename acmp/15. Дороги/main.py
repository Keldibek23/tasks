f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline()) 
summ = 0
a = []

for i in range(n):
    a.append(f.readline().split())

for i in range(n):
    for j in range(n):
        if int(a[i][j])==1:
            summ+=1

fc.write(str(int(summ/2)))



fc.close()
