if __name__ == '__main__':
    import re
    n = int(input())
    s = set(map(int, input().split(' ')))
    N = int(input())
    for i in range(N):
        cmd = input()
        if m := re.match(r'^intersection_update (\d+)$', cmd):
            s &= set(map(int, input().split(' ')))
        elif m := re.match(r'^update (\d+)$', cmd): 
            s |= set(map(int, input().split(' ')))
        elif m := re.match(r'^difference_update (\d+)$', cmd): 
            s -= set(map(int, input().split(' ')))
        elif m := re.match(r'^symmetric_difference_update (\d+)$', cmd): 
            s ^= set(map(int, input().split(' ')))
    print(sum(s))
