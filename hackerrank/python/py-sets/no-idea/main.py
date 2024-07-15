if __name__ == '__main__':
    input()
    l = map(int, input().split(' '))
    A = set(map(int, input().split(' ')))
    B = set(map(int, input().split(' ')))
    print(sum(map(lambda x: (x in A) - (x in B),  l)))

