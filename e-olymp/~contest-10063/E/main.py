#!/usr/bin/env python3

import re

s = input()
print(re.sub(r"\s+", " ", s))