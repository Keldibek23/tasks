f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = f.readline()

nuli = 0
maxi = 0

for i in range(len(n)):
    if(int(n[i])==0):
        nuli+=1
        if (maxi<nuli):
            maxi = nuli
    if(int(n[i])==1):
        if (maxi<nuli):
            maxi = nuli
        nuli = 0


fc.write(str(maxi))
fc.close()
