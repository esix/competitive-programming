n = int(input())
rs = []

for i in range(n):
    x1,y1,x2,y2,r = map(int, input().split(' '))
    x1, x2 = min(x1,x2), max(x1,x2)
    y1, y2 = min(y1,y2), max(y1,y2)
    x1 -= r
    y1 -= r
    x2 += r
    y2 += r
    rs.append((x1,y1,x2,y2))

ss = []

def point_in_r(x,y,r):
    return x >= r[0] and y >= r[1] and x <= r[2] and y <= r[3]

def intersects(r1, r2):
    return (point_in_r(r1[0],r1[1],r2) or
            point_in_r(r1[2],r1[1],r2) or
            point_in_r(r1[0],r1[3],r2) or
            point_in_r(r1[2],r1[3],r2) or
            point_in_r(r2[0],r2[1],r1) or
            point_in_r(r2[2],r2[1],r1) or
            point_in_r(r2[0],r2[3],r1) or
            point_in_r(r2[2],r2[3],r1))

def is_in_zone(s, r):
    for rr in s:
        if intersects(rr, r):
            return True
    return False

for r in rs:
    ins = [r]
    not_ins = []
    for s in ss:
        if is_in_zone(s, r):
            ins.extend(s)
        else:
            not_ins.append(s)
    ss = not_ins
    ss.append(ins)
print(len(ss))
