inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n = int(inp.readline())
res = 0
for i in range(1, n +1):
    if n % i == 0:
        res += i

answer = str(res)
print(answer)
out.write(answer)
