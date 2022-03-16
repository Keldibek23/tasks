f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())
summa = 0

for i in range(1,n+1):
    if(n%i==0):
        summa+=i

fc.write(str(summa))
fc.close()
