#!/usr/bin/env python
import re, sys
sys.stdout.write(re.sub('([a-zA-Z]+)', lambda m: (m.group(0))[::-1], sys.stdin.read()))