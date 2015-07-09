#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

p1 = inp.readline().strip()
p2 = inp.readline().strip()

rules = {
    '0' : set([0]),
    '1' : set([1]),
    '2' : set([2]),
    '3' : set([3]),
    '4' : set([4]),
    '5' : set([5]),
    '6' : set([6]),
    '7' : set([7]),
    '8' : set([8]),
    '9' : set([9]),
    'a' : set([0,1,2,3]),
    'b' : set([1,2,3,4]),
    'c' : set([2,3,4,5]),
    'd' : set([3,4,5,6]),
    'e' : set([4,5,6,7]),
    'f' : set([5,6,7,8]),
    'g' : set([6,7,8,9]),
    '?' : set([0,1,2,3,4,5,6,7,8,9])
}


if len(p1) != len(p2):
    answer = '0'
else:
    result = 1
    n = len(p1)
    for i in range(n):
        s1 = rules[p1[i]]
        s2 = rules[p2[i]]
        result *= len(s1.intersection(s2))
        if result == 0:
            break
    answer = str(result)


print(answer)
out.write(answer)
