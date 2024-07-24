if __name__ == '__main__':
    A = set(map(int, input().split(' ')))
    n = int(input())
    
    def next_subset():
        return set(map(int, input().split(' ')))

    def isstrictsubset(B):
        global A
        return B.issubset(A) and B != A
    
    print(all([isstrictsubset(next_subset()) for i in range(n)]))

