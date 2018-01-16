#!/usr/bin/env python3


n = int(input())
res = bin(n)[3:].replace('1', 'SX').replace('0', 'S')
print (res)