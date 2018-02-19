#!/usr/bin/env python3


def solve(s):
    i = 0
    j = len(s) - 1

    removed_idx = False

    while i < j:
        if s[i] == s[j]:
            i += 1
            j -= 1
            continue

        if s[i] != s[j]:
            if removed_idx != False:
                return False
            removed_idx = i
            i += 1

    if i == j and removed_idx == False:
        removed_idx = i

    return removed_idx

s = input()

r = solve(s)

if r != False:
    print("yes")
    print(s[:r] + s[r+1:])

else:
    r = solve(''.join(reversed(s)))
    if r != False:
        print("yes")
        r = len(s) - r - 1
        print(s[:r] + s[r+1:])
    else:
        print("no")

