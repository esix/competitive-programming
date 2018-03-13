#!/usr/bin/env python3

n = int(input())
a = [input() for i in range(n)]
print ('\n'.join(sorted(set(a))))