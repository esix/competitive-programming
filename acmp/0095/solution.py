n = input()
k=0
while len(n)>1:
    n = str(sum(map(int,n)))
    k+=1
print(n,k)
