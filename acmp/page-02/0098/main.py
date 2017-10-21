n = int(input())
a = list(map(int, input().split(' ')[0:n]))
o = [0,0]
s = 0
while len(a):
    if a[0] >= a[-1]:
        v = a[0]
        a = a[1:]
    else:
        v = a[-1]
        a = a[:-1]
    o[s] += v
    s = 1-s
print(str(o[0]) + ':' + str(o[1]))
