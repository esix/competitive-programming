inp = open('input.txt', 'r')
out = open('output.txt', 'w')


a = int(inp.readline())
b = int(inp.readline())

if a < b : answer = "<"
elif a == b : answer = "="
else: answer=">"

print(answer)
out.write(answer)
