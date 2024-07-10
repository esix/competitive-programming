if __name__ == '__main__':
    T = int(input())
    H = 'H'
    S = ' '
    for i in range(T): print(S * (T - i - 1) + H * (i * 2 + 1))
    for i in range(T + 1): print(S * (T // 2) + H * T + S * (3 * T) + H * T)
    for i in range((T + 1) // 2): print(S * (T // 2) + H * (5 * T))
    for i in range(T + 1): print(S * (T // 2) + H * T + S * (3 * T) + H * T)
    for i in range(T - 1, -1, -1): print(S * (T * 4) + S * (T - i - 1) + H * (i * 2 + 1))

