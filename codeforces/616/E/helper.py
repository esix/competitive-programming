M = 30

def stringify(n, i, j):
    s = str(n)
    if i == j:
        s = '_' + s
    while len(s) < 3:
        s = ' ' + s
    return s

title = ' '.join([stringify(i, 0, 1) for i in range(1, M)])
print('     '  + title)
print('-' * 80)


for n in range(1, M):
    s = []
    for m in range(1, M):
        x = sum([n % i for i in range(1, m+1)])
        s.append(stringify(x, n, m))
    print(stringify(n, 1, 0) + ': ' + ' '.join(s))
