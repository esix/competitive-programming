import sys
import json
from functools import cmp_to_key

packets_pairs = []
packets = []

try:
    while True:
        first = json.loads(input())
        second = json.loads(input())
        packets_pairs.append((first, second))
        packets.append(first)
        packets.append(second)
        input()
except EOFError as e:
    pass


def cmpNumbers(a: int, b: int):
    if a < b: return -1
    if a > b: return 1
    return 0

def compare(first, second):
    match ((first, second)):
        case (int(a), int(b)):
            return cmpNumbers(a, b)
        case ([*a], int(b)):
            return compare(a, [b])
        case (int(a), [*b]):
            return compare([a], b)
        case ([], []):
            return 0
        case ([], [b, *bb]):
            return -1
        case ([a, *aa], []):
            return 1
        case ([a, *aa], [b, *bb]) if a == b:
            return compare(aa, bb)
        case ([a, *aa], [b, *bb]):
            c = compare(a, b)
            return compare(aa, bb) if c == 0 else c
        case x:
            print('No way: ', x)
            return 0

result = 0

for i in range(len(packets_pairs)):
    if compare(*packets_pairs[i]) == -1:
        result += i + 1

print(result)


d1 = [[2]]
d2 = [[6]]
packets.append(d1)
packets.append(d2)

packets.sort(key=cmp_to_key(compare))

print((packets.index(d1) + 1) * (packets.index(d2) + 1))
