if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        a = input()
        A = set(map(int, input().split(' ')))
        b = input()
        B = set(map(int, input().split(' ')))
        print(A.issubset(B))

