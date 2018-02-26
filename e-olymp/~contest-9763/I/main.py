#!/usr/bin/env python3

def make_min(s):
    digits = [c for c in s]
    digits = sorted(digits)
    if digits[0] == '0':
        digits[0], digits[1] = digits[1], digits[0]
    if digits[0] == '0':          # both [0] and [1] are zero
        digits[0], digits[2] = digits[2], digits[0]
    return int(''.join(digits))

def make_max(s):
    digits = [c for c in s]
    digits = list(reversed(sorted(digits)))
    return int(''.join(digits))


s = input()
print(make_min(s) + make_max(s))
