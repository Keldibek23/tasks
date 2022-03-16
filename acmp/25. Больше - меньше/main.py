f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

a = int(f.readline())
b = int(f.readline())

if (a<b):
    fc.write("<")
if (a>b):
    fc.write(">")
if (a==b):
    fc.write("=")

fc.close()
