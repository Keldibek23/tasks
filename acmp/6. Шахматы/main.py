f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")
  
pos = f.readline()

s = 'ABCDEFGH'
c = '12345678'
a = 0
b = 0

if (len(pos)==5 and pos[2]=='-'):
    if(s.find(pos[0])>0 and s.find(pos[3])>0 and c.find(pos[1])>0 and c.find(pos[4])>0):
        a = abs(s.find(pos[0])-s.find(pos[3]))
        b = abs(c.find(pos[1])-c.find(pos[4]))
        if(a*b==2):
            fc.write("YES")
        else:
            fc.write("NO")
    else:
        fc.write("ERROR")
else:
    fc.write("ERROR")
fc.close()
