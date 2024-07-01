if __name__ == '__main__':
    n = int(input())
    result = 0
    for i in range(n + 1):
        base = 10 if i < 10 else 100 if i < 100 else 1000
        result = result * base + i
    print(result)