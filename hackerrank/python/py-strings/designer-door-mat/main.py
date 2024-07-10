if __name__ == '__main__':
    n, m = map(int, input().split(' '))
    for i in range(n // 2, 0, -1): print('---' * i + '.|.' * (n - 2 * i) + '---' * i)
    print('-' * ((n * 3 - 7) // 2) + "WELCOME" + '-' * ((n * 3 - 7) // 2))
    for i in range(1, n // 2 + 1): print('---' * i + '.|.' * (n - 2 * i) + '---' * i)

