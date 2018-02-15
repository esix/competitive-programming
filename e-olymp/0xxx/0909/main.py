#!/usr/bin/env python3

import re 

s = input()

print(len(re.findall(r"\w+", s)))