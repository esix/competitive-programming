from collections import deque
import re

if __name__ == '__main__':
    N = int(input())
    result = deque()
    for i in range(N):
        cmd = input()
        if m := re.match(r'^append (\d+)$', cmd):
            result.append(m[1])
        elif m := re.match(r'^pop$', cmd):
            result.pop()
        elif m := re.match(r'^popleft$', cmd):
            result.popleft()
        elif m := re.match(r'^appendleft (\d+)$', cmd):
            result.appendleft(m[1])
    print(' '.join(result))

