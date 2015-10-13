s = input()
k = int(input())

def solve(s, k):
    if k == 0:
        return False if len(s) > 0 else True

    if len(s) % k != 0:
        return False

    cl = len(s) / k

    for i in range(k):
        if s[int(i*cl) : int((i+1)*cl) ] != s[int(i*cl) : int((i+1) * cl)][::-1]:
            return False

    return True



print("YES" if solve(s, k) else "NO")
