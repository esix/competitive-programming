# failed test 3

n = int(input())

t1 = list(map(int, input().split(' ')))
t2 = list(map(int, input().split(' ')))

t1.sort()
t2.sort(reverse=True)

t = 0
for i in range(n):
    t += t1[i]
    t1[i] = t              # modify t1 - time when present is ready

t = 0

for i in range(n):
    if t < t1[i]:
        t = t1[i]          # have to wait i'th present
    t += t2[i]

print (t)
