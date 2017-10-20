

def v2d(w, h):
    return (w + 1) * h + w * (h + 1)

def v3d(w, h, d):
    return ((w + 1) * (h + 1) *d +  
            (w + 1) * h * (d + 1) +
            w * (h + 1) * (d + 1))


N = int(input())

d = round(N ** (1.0 / 3.0)) + 1
while d*d*d > N:
    d -= 1

w = h = d
v = v3d(w,h,d)
N -= w * h * d

# so, have a cube, and left N cells


while True:                 # max 3 times cycle
    if h * d > N:
        break

    # can fill square

    w += 1
    v += v3d(1, h, d) - v2d(h, d)
    N -= h * d

    [w, h, d] = sorted([w,h,d])

if N == 0:
    print (v)
    exit(0)


#print ('Built cube', w, h, d)
#print (' matches:', v)
#print (' blocks left:', N)
#print ('')


[w, h] = [h, d]
# left N (!= 0) blocks to place inside rectangle on w, h (w < h)

w = 1
h = 1
v += v3d(1, 1, 1) - v2d(1, 1)     # add one slot
N -= 1

while True:
    if h > N:
        break

    # width grows, add h slots without two sides
    w += 1
    v += 3 * h + 2
    N -= h
    if w > h:
        [w, h] = [h, w]


# print ('Built square', w, h)
# print (' matches:', v)
# print (' blocks left:', N)
# print ('')

if N == 0:
    print (v)
    exit(0)

w = h
# left N (!=0)) blocks to place in line on w

v += 5
N -= 1

while N > 0:
    v += 3
    N -= 1

print (v)
        