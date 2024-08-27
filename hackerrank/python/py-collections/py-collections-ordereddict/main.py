from collections import OrderedDict
import re

n = int(input())
d = OrderedDict()
for i in range(n):
    s = input()
    (name, count)= re.match(r'^(.+) (\d+)$', s).groups()
    d[name] = (d[name] if name in d else 0) + int(count)
    
for k, v in d.items():
    print(k, v)

