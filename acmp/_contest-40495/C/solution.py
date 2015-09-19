def intersect(a, b):
    dist2 = (a[0] - b[0])**2.0 + (a[1] - b[1])**2.0 + (a[2] - b[2])**2
    return dist2 <= (a[3] + b[3])**2

a = [tuple(map(float, input(' ').split(' ')[:4]))]
has_intersection = [False]

n = int(input())
for i in range(1,n+1):
    b = tuple(map(float, input(' ').split(' ')[:4]))
    has_intersection.append(False)
    for j in range(len(a)):
        if intersect(a[j], b):
            has_intersection[j] = True
            has_intersection[i] = True
    a.append(b)
    if False not in has_intersection:
        print(i)
        exit(0)

print(0)
