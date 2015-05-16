H, W = map(int, raw_input().split(' '))


mtx = [map(int, raw_input().split(' ')) for line in xrange(0,H)]


def sum_items_at_distance(y, x, D):
    result = 0
    D2 = 2*D
    for d in xrange(D*4):
        xx = x + abs(d-D2)-D
        yy = y + D-abs(D2-abs(d-D))
        if 0 <= xx < W and 0 <= yy < H:
            result |= mtx[yy][xx]
    return result


def solvePoint(y,x):
    if mtx[y][x] > 0:
        return '-1'
    for i in xrange(1,6):
        r = sum_items_at_distance(y,x,i)
        if r > 0: return str(r)
    return '0'

def solveRow(y):
    return [solvePoint(y,x) for x in xrange(W)]

def solve():
    for y in xrange(H):
        print ' '.join(solveRow(y))

solve()