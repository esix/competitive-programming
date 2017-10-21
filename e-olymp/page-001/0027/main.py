n = int(input())
b = bin(n).lstrip('-0b')
lst = [int(b[-i:len(b)] + b[0:-i],2) for i in range(len(b))]
print (max(lst))
