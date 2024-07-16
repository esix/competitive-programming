if __name__ == '__main__':
    m = int(input())
    M = set(map(int, input().split(' ')))
    n = int(input())
    N = set(map(int, input().split(' ')))
    for e in sorted(M ^ N):
        print(e)

