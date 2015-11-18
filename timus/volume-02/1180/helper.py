a = 3

def solve(a):
    if a == 0:
        return (False, None)
    i = 1

    while i <= a:
        if not solve(a - i)[0]:
            return (True, i)
        i *= 2
    return (False, None)


for a in range(1, 17):
    winner, move = solve(a)
    if winner:
        print(a, 1, move)
    else:
        print(a, 2)
