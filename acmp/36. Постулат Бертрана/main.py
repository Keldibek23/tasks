f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())
k = 0
l = 0
for i in range(n,2*n+1):
    if (n%i==0):
        k+=1
    else:
        l+=1
print(k)


fc.close()
