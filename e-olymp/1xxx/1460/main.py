#!/usr/bin/env python3

n, a, b, c, d = map(int, input().split(' ')[:5])

vs = [i+1 for i in range(n)]


vs = vs[:a-1] + list(reversed(vs[a-1:b])) + vs[b:]
vs = vs[:c-1] + list(reversed(vs[c-1:d])) + vs[d:]

print(' '.join(map(str, vs)))