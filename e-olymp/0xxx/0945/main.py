#!/usr/bin/env python3

v = int(input())

v0 = abs(v // 100);
v1 = abs((v % 100) // 10);
v2 =abs(v % 10);

r = v0 * 10 + v2;
print(r)
