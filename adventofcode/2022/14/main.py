import sys

rock = {}

max_y = -float('inf')

for line in sys.stdin:
    path = [tuple(map(int, p.split(','))) for p in line.strip().split(' -> ')]
    x1, y1 = path[0]
    for (x2, y2) in path[1:]:
        max_y = max(max_y, y1, y2)
        for x in range(min(x1, x2), max(x1, x2) + 1):
            for y in range(min(y1, y2), max(y1, y2) + 1):
                rock[(x, y)] = 1
        x1 = x2
        y1 = y2

result = 0
sand = {}

while (True):
    y = 0
    x = 500

    for y in range(0, max_y + 2):
        p = (x, y + 1)
        pl = (x - 1, y + 1)
        pr = (x + 1, y + 1)
        if p not in rock and p not in sand:
            pass
        elif pl not in rock and pl not in sand:
            x -= 1
        elif pr not in rock and pr not in sand:
            x += 1
        else:
            sand[(x, y)] = 2
            break
    else:
        break

    result += 1

print(result)


sand = {}
result = 0

while (True):
    y = 0
    x = 500
    if (x, y) in sand:
        break

    for y in range(0, max_y + 2):
        p = (x, y + 1)
        pl = (x - 1, y + 1)
        pr = (x + 1, y + 1)
        if p not in rock and p not in sand:
            pass
        elif pl not in rock and pl not in sand:
            x -= 1
        elif pr not in rock and pr not in sand:
            x += 1
        else:
            break
    sand[(x, y)] = 2
    result += 1

print (result)