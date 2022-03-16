f = open("INPUT.TXT","r")
n = int(f.readline())
summa = 0
if(n<10**4):
    if(n<=0):
        for i in range(n,2):
            summa += i
    else:
        summa = int((1+n)*n/2)


fc = open("OUTPUT.TXT","w")
fc.write(str(summa))
fc.close()
