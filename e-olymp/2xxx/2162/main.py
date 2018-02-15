#!/usr/bin/env python3

s = input().replace(' ', '', 1000)
print ("YES" if s == s[::-1] else "NO")
