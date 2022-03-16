f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())

a = f.readline().split()
m = 0

for i in range(n):
    if (int(a[i])<=437):
        fc.write("Crash "+str(i+1))
        
    else:
        fc.write("No crash")


fc.close()
