l = int(input())
n = 2
p1, p2 = 1, 2
s = 4

while s <= l:
    n += 1
    p1, p2 = p2, p1 + p2
    s += p2

print (n)
