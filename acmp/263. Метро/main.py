f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

a = f.readline().split()
n = int(a[0])
ans = int(a[1])
x = int (a[2])

if (x<ans):
    x = ans+x
    ans = x-ans
    x = x-ans

if ((x-ans-1)<((ans-1)+(n-x))):
    fc.write(str(x-ans-1))
else:
    fc.write(str((ans-1)+(n-x)))

fc.close()
