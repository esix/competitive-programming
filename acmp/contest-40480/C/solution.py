inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())
x = 0
for i in range(1,n+1):
    x += 1
    while len(str(x)) > 1 and len(set(str(x))) != len(str(x)):
        x += 1

answer = str(x)

print(answer)
out.write(answer)
