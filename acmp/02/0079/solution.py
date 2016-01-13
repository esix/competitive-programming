#!/usr/bin/env python3
a, b = open('input.txt', 'r').readline().split(' ')[0:2]
open('output.txt', 'w').write(str(int(a[-1])**int(b))[-1])
