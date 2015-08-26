ss = []

while True:
    s = input()
    if s == 'ENDOFINPUT': break
    ss.append(s)

r = set([hash(a + b) for a in ss for b in ss])
res = 0
for s in ss:
    if hash(s) in r:
        res += 1
print(res)
