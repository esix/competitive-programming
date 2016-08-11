def factorial(n):
    if n == None:
        return 1
    if n < 0:
        return None
    if n == 0:
        return 1
    acc = 1
    for i in range(1,n+1):
        acc *= i
    return acc

