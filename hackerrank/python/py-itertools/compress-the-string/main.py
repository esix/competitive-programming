from itertools import groupby
S = input()
print(*['({0}, {1})'.format(len(list(g)), k) for k, g in groupby(S)])

