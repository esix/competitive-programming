#!/usr/bin/env python3

v = int(input())

v0 = abs(v // 100);
v1 = abs((v % 100) // 10);
v2 =abs(v % 10);

r = v2 * 100 + v1 * 10 + v0;
print(r)
