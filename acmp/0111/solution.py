import math
k = int(input())

if k < 3:
    print(0)
else:
    if k % 3 == 0:
        print(2)
    elif k % 4 == 0:
        print(3)
    else:
        d = 2
        while d*d <= k:
            while (k % d) == 0:
                if d > 2:
                    print(d-1)
                    exit(0)
                k //= d
            d += 1
        print(k-1)
