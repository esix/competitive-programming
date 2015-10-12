T = int(input())

for t in range(T):
    n, k = map(int, input().split(' ')[:2])
    s = ["","",""]
    for i in range(3):
        s[i] = input()

    s[0] += '.' * (n*3)
    s[1] += '.' * (n*3)
    s[2] += '.' * (n*3)

    def top():
        return [s[0][0] != '.', s[1][0] != '.', s[2][0] != '.']

    def shift():
        s[0] = s[0][1:]
        s[1] = s[1][1:]
        s[2] = s[2][1:]
        return top()

    p = [s[0][0] == 's', s[1][0] == 's', s[2][0] == 's']

    for i in range(1, n):
        np = [False, False, False]
        if p[0] == True and s[0][1] == '.':
            np[0] = True
            np[1] = True
        if p[1] == True and s[1][1] == '.':
            np[0] = True
            np[1] = True
            np[2] = True
        if p[2] == True and s[2][1] == '.':
            np[1] = True
            np[2] = True

        p = np

        s0, s1, s2 = shift()

        if s0: p[0] = False
        if s1: p[1] = False
        if s2: p[2] = False

        # my move ended

        s0, s1, s2 = shift()

        if s0: p[0] = False
        if s1: p[1] = False
        if s2: p[2] = False

        s0, s1, s2 = shift()

        if s0: p[0] = False
        if s1: p[1] = False
        if s2: p[2] = False

    if p[0] or p[1] or p[2]:
        print("YES")
    else:
        print("NO")
