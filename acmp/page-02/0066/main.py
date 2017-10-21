#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

kbd = "qwertyuiopasdfghjklzxcvbnmq"
s = inp.readline().strip()
answer = kbd[kbd.index(s) + 1]

print(answer)
out.write(answer)
