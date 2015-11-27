import re

ss = re.split(";|,", input())
a = []
b = []

p = re.compile('^(-?([1-9]\d*)|0)$')

for s in ss:
    if p.match(s):
        a.append(s)
    else:
        b.append(s)

print('"' + ','.join(a) + '"' if len(a) else '-')
print('"' + ','.join(b) + '"' if len(b) else '-')
