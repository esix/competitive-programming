inp = open('input.txt', 'r')
out = open('output.txt', 'w')

N = int(inp.readline())

answer = str( N // 10 + int(bool(N % 10)))

print(answer)
out.write(answer)
