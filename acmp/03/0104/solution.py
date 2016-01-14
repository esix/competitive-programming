import re
s = input()
t = input()
if '*' in s or '?' in s:
    s,t=t,s
print('YES' if re.match('^' + t.replace('*','.*').replace('?','.') +'$', s) else 'NO')
