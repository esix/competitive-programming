T = int(input())
for t in range(T):
    n = int(input())
    blocks = list(map(int, input().split(' ')))
    s = 0
    e = n - 1
    last = float("inf")
    while s < e:
        if blocks[s] > blocks[e]:
            m = blocks[s]
            s += 1
        else:
            m = blocks[e]
            e -= 1

        if m > last:
            print('No')
            break
        last = m

    else:
        print('Yes')

