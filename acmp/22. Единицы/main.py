f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())
ans = 0

while(n != 0):
    ans += n%2
    n = int(n/2)
fc.write(str(int(ans)))

fc.close()
