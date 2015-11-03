def can_win(k, l):
    if l >= k:
        return True

    for i in range(1, l+1):
        res = can_win(k - i, l)
        if res is False:
            return True

    return False



for k in range(3,30):
    s = str(k) + ": "
    if k < 10: s = " " + s
    ans = ""

    for l in range(2,k):
        if can_win(k, l):
            s += "0 "
        else:
            s += "1 "
            if ans == "":
                ans = str(l)
    print(s, "("+ans+")")
