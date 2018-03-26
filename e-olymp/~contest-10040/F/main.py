#!/usr/bin/env python3

def input_entry():
    xs = input().split()
    m = int(xs[0])
    return list(map(int, xs[1:m+1]))


n = int(input())
languages_of_person = [input_entry() for i in range(n)]

persons_by_language = [set() for i in range(101)]
for p in range(len(languages_of_person)):
    for l in languages_of_person[p]:
        persons_by_language[l].add(p)


visited_persons = set([0])
ps = [0]

while len(ps):
    p = ps[0]
    ps = ps[1:]
    ls = languages_of_person[p]

    for l in ls:
        new_ps = persons_by_language[l]
        for new_p in new_ps:
            if new_p not in visited_persons:
                visited_persons.add(new_p)
                ps.append(new_p)

print(len(visited_persons))
