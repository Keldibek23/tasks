s='qwertyuiopasdfghjklzxcvbnmq'
word=input() 
i=0 
while i<len(s): 
    if s[i]==word[0] and s[i:i+len(word)]==word:
        print(s[i+1])
        exit() 
    else:
        i+=1
