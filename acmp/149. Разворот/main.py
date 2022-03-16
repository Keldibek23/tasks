f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")
 
n = int(f.readline())
 
a = f.readline().split()
c = []
for i in a:
    c.append(int(i))

def bubble_sort(seq):
    changed = True
    while changed:
        changed = False
        for i in range(len(seq) - 1):
            if seq[i] > seq[i+1]:
                seq[i], seq[i+1] = seq[i+1], seq[i]
                changed = True
    return None

bubble_sort(c)

for i in range(len(c)-1, -1, -1):
    fc.write(str(c[i]+" "))

fc.close()
