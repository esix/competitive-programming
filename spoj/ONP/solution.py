#!/usr/bin/env python

def get_onp(s):
    ops = "+-*/^"
    stack = list()
    out = ""

    for c in s:
        if c.isalpha():
            out += c
        elif c == '(':
            stack.append(c)
        elif c == ')':
            while stack[-1] != '(': out += stack.pop()
            stack.pop()
        elif c in ops:
            while len(stack) and stack[-1] != '(' and ops.index(stack[-1]) < ops.index(c): out += stack.pop()
            stack.append(c)
    return out


n = int(raw_input())
for i in xrange(n):
    print get_onp(raw_input())
