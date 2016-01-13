n = int(input())
d = [[] for i in range(3*n*n)]
for i in range(n*n):
    s = input().split(' ')
    for j in range(n*n):
        v = int(s[j])
        d[(i // n)*n + j // n].append(v)
        d[n*n + j].append(v)
        d[2*n*n + i].append(v)
e = sorted([i+1 for i in range(n*n)])
print('Correct' if list(filter(lambda x: sorted(x) != e, d)) == [] else 'Incorrect')
