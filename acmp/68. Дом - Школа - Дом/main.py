f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

lo = str(f.readline())
n = int(f.readline())

if (lo=="Home\n"):
    fc.write("Yes")
    

if (lo=="School\n"):
    if(n%2==0):
        fc.write("No")
    else:
        fc.write("Yes")
print (lo)

fc.close()
