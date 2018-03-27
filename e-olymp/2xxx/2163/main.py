#!/usr/bin/env python3

ds = list(map(lambda x: int(x), input()))
s = sum(ds)
print("YES" if s % 3 == 0 else "NO")