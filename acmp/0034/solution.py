inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n, k = map(int, inp.readline().split(' ')[0:2])
l = inp.readline().strip()

h = set()
answer = "NO"

for i in range(n-k+1):
    s = l[i:i+k]
    if s in h:
        answer = "YES"
        break
    else:
        h.add(s)

print(answer)
out.write(answer)
