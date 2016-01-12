inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a, b = map(int, inp.readline().split(' ')[0:2])
answer = str(b-1) + ' ' + str(a - 1)

print(answer)
out.write(answer)
