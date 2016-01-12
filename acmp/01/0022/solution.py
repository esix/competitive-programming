inp = open('input.txt', 'r')
out = open('output.txt', 'w')


a = int(inp.readline())
res = 0
while(a):
    a = a & (a - 1)
    res += 1

answer = str(res)
print(answer)
out.write(answer)
