n = int(input())
a = list(map(int, input().split(' ')[:n]))
res = 0
state = 0
for x in a:
    if state == 0:
        if x == 0:
            pass
        else:
            state = 1
            res += 1
    elif state == 1:
        if x == 0:
            state = 2
        else:
            res += 1
    elif state == 2:
        if x == 0:
            state = 0
        else:
            state = 1
            res += 2

print(res)
