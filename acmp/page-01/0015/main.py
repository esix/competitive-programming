inp = open('input.txt', 'r')
out = open('output.txt', 'w')

N = int(inp.readline())

result = 0

for i in range(N):
    result += sum(map(int, inp.readline().split(' ')[0:N]))

answer = str(result // 2)

print(answer)
out.write(answer)
