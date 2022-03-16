f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

a = []

ta = 0
tb = 0

for i in range(4):
    a.append(f.readline().split())

for i in range(4):
    ta += int(a[i][0])
    tb += int(a[i][1])

if (ta>tb):
    fc.write("1")
if (ta<tb):
    fc.write("2")
if (ta==tb):
    fc.write("DRAW")


fc.close()
