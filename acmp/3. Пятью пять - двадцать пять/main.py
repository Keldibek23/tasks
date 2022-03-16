f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")
n = int(f.readline())
chislo = 0
if (n<4*(10**5) and n%5==0):
    if(n==5):
        fc.write("25")
    else:
        m = int(n/10)
        chislo = m*(m+1)
        fc.write(str(chislo)+"25")


fc.close()
