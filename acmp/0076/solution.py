from collections import defaultdict as D
s = D(int)
e = D(int)
for i in range(int(input())):
    l = input()
    s[int(l[0:2])*60 + int(l[3:5])]+=1
    e[int(l[6:8])*60 + int(l[9:11])]+=1
r = m = 0
for i in sorted(set(s.keys()).union(e.keys())):
    r += s[i]
    m = max(r, m)
    r -= e[i]
print(m)
