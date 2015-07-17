#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

place = inp.readline().strip()
X = int(inp.readline())

if X % 2 == 1:
    answer = "Yes"
elif place == "Home":
    answer = "Yes"
else:
    answer = "No"

print(answer)
out.write(answer)
