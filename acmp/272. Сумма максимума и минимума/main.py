lst = list(str(input()).split()) 
lst1 = [] 
lst2 = [] 
lst1 = [int(lst[e-1]) for e in range(1,len(lst)+1) if e % 2 == 0] 
lst2 = [int(lst[e-1]) for e in range(len(lst)) if e % 2 != 0] 
print(max(lst1)+min(lst2))
