f = open("INPUT.TXT","r")
fc = open("OUTPUT.TXT","w")

n = int(f.readline())

def fact(n):
    if (n==0 or n==1):
        return 1
    else:
        return n*fact(n-1)



fc.write(str(fact(n)))
fc.close()
