import re

if __name__ == '__main__':
    N = int(input())
    result = []
    for i in range(N):
        cmd = input()
        if m := re.match(r'^insert (\d+) (\d+)$', cmd):
            result.insert(int(m[1]), int(m[2]))
        elif cmd == 'print':
            print(result)
        elif m := re.match(r'^remove (\d+)$', cmd):
            result.remove(int(m[1]))
        elif m := re.match(r'^append (\d+)$', cmd):
            result.append(int(m[1]))
        elif cmd == 'sort':
            result.sort()
        elif cmd == 'pop':
            result.pop()
        elif cmd == 'reverse':
            result.reverse()

