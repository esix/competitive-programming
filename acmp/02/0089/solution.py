import re
n = int(input())
r = re.compile('^(".*") (\d{2}):(\d{2}) (\d{2}):(\d{2})$')
bn = ''
bt = 24*60+1
for i in range(n):
    g = r.match(input().strip())
    t = (int(g.group(4))*60 + int(g.group(5)) - int(g.group(2))*60 - int(g.group(3))) % (24*60)
    if t == 0:t=24*60
    if t < bt: bn, bt = g.group(1), t

print('The fastest train is ' + bn + '.')
print("It's speed is", round(60 *650 / bt) ,"km/h, approximately.")
