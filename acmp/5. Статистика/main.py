f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())
cifry = f.readline().split()

even = []
odd = []

for i in range(n):
    if (int(cifry[i])%2==1):
        odd.append(cifry[i])
    else:
        even.append(cifry[i])

for i in odd:
    fc.write(str(i)+" ")
fc.write("\n")
for i in even:
    fc.write(str(i)+" ")
fc.write("\n")
if (len(even)<len(odd)):
    fc.write("NO")
else :
    fc.write("YES")
    
    
fc.close()
