#!/usr/bin/env python3

def memoize(f):
    cache = {}
    def decorated_function(*args):
        if args in cache:
            return cache[args]
        else:
            cache[args] = f(*args)
            return cache[args]
    return decorated_function

@memoize
def fib(n):
    return 1 if n < 2 else fib(n-2) + fib(n-1)

print (fib(int(input())))