f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")
 
zl = f.readline().split()

a = zl[0]
b = zl[1]
by = 0
ko = 0

for i in range(len(a)):
    for j in range (len(b)):
        if (int(a[i])==int(b[j])):
            if (i==j):
                by+=1
                ko-=1
            ko+=1
        
fc.write(str(by)+" "+str(ko))
fc.close()
