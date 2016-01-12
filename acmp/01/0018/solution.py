inp = open('input.txt', 'r')
out = open('output.txt', 'w')

N = int(inp.readline())

f = 1
for i in range(1, N+1):
    f *= i

answer = str(f)


print(answer)
out.write(answer)
