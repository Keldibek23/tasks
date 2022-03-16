f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())

a = []

def d(a,b):
    return int(19*b + (a + 239)*(a + 366)/2)

for i in range(n):
    a.append(f.readline().split())

for i in range(n):
    fc.write(str(d(int(a[i][0]),int(a[i][1])))+"\n")


fc.close()
