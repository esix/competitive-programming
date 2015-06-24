
n = int(raw_input())


ls = {}
m = 0


for i in range(n):
    s = raw_input()
    if s not in ls:
        ls[s] = 0
    val = ls[s]
    val += 1
    if val > m:
        m = val
    ls[s] = val

print m