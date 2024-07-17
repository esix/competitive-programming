if __name__ == '__main__':
    import re
    n = int(input())
    s = set(map(int, input().split(' ')))
    N = int(input())
    for i in range(N):
        cmd = input()
        if m := re.match(r'^pop$', cmd):
            s.pop()
        elif m := re.match(r'^remove (\d+)$', cmd): 
            s.remove(int(m[1]))
        elif m := re.match(r'^discard (\d+)$', cmd): 
            s.discard(int(m[1]))
    print(sum(s))

