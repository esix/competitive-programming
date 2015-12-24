nx, bx = map(int, input().split(' ')[:2])
xs = list(map(int, input().split(' ')[:nx]))
ny, by = map(int, input().split(' ')[:2])
ys = list(map(int, input().split(' ')[:ny]))

p = 1
x = 0
for d in reversed(xs):
    x += d * p
    p *= bx

p = 1
y = 0
for d in reversed(ys):
    y += d * p
    p *= by

if x == y:
    print('=')
elif x < y:
    print('<')
else:
    print('>')
