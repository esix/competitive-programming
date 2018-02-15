#!/usr/bin/env python3

import re

s = '+' + input()
es = map(int, re.findall(r"[+-]\d+", s))
print(sum(es))