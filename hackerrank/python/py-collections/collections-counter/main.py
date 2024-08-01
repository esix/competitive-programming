from collections import Counter

X = int(input())
shoes = Counter(map(int, input().split(' ')))
N = int(input())
result = 0
for i in range(N):
   size, price = map(int, input().split(' '))
   if shoes[size]:
       shoes[size] -= 1
       result += price
print(result)

