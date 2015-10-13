#!/usr/bin/env python

n,m,q = map(int, input().split(' ')[:3])

entry_idx = 1

class Entry:
    def __init__(self, m, M):
        global entry_idx
        self._min = m
        self._max = M

    def __str__(self):
        return "[" + str(self._min) + "-" + str(self._max) + "]"

    def __len__(self):
        return self._max - self._min + 1


lines = []
maxes = []

for _ in range(n):
    linec = input().split(' ')
    line = []
    entry = None
    max_line = 0
    for i in range(m):
        c = linec[i]
        if c == '1':
            if entry:
                entry._max = i
            else:
                entry = Entry(i, i)
            if len(entry) > max_line: max_line = len(entry)
        else:
            entry = None
        line.append(entry)

    lines.append(line)

    maxes.append(max_line)

#for line in lines:
#    print(list(map(str, line)))
#print ()
#print (maxes)
#print ()

for _ in range(q):
    i, j = map(int, input().split(' ')[:2])
    i -= 1
    j -= 1
    line = lines[i]

    entry = line[j]

    if entry:
        line[j] = None
        e_left = Entry(entry._min, j-1)
        entry._min = j+1    # right

        j -= 1
        while j >= 0 and line[j] is entry:
            line[j] = e_left
            j -= 1

        M = 0
        for e in line:
            if e and len(e) > M:
                M = len(e)
        maxes[i] = M

    else:
        entry = Entry(j, j)
        line[j] = entry
        if j > 0 and line[j-1]:
            e_to_replace = line[j-1]
            entry._min = e_to_replace._min
            jj = j - 1
            while jj >= 0 and line[jj] is e_to_replace:
                line[jj] = entry
                jj -= 1
        if j < m-1 and line[j+1]:
            e_to_replace = line[j+1]
            entry._max = e_to_replace._max
            jj = j + 1
            while jj < m and line[jj] is e_to_replace:
                line[jj] = entry
                jj += 1
        if len(entry) > maxes[i]:
            maxes[i] = len(entry)

    #for line in lines:
    #    print(list(map(str, line)))
    #print ()
    #print (maxes)
    #print ()
    print (max(maxes))
    #print ()
