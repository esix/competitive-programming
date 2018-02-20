#!/usr/bin/env python3

import re 
s = input()
print (max([0] + list(map(len, re.findall(r"k+", s)))))
