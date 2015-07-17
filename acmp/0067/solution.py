#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

def parse_ip(s):
    qs = list(map(int, s.split('.')))
    return (qs[0] << 24) | (qs[1] << 16) | (qs[2] << 8) | (qs[3] << 0)

N = int(inp.readline())
masks = [parse_ip(inp.readline().strip()) for i in range(N)]
M = int(inp.readline())

answer = ""

for i in range(M):
    ip1, ip2 = tuple(map(parse_ip, inp.readline().strip().split(' ')))
    res = sum(map(lambda mask: 1 if ip1 & mask == ip2 & mask else 0, masks))
    answer += str(res) + "\n"

print(answer)
out.write(answer)
