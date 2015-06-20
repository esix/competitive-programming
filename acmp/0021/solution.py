inp = open('input.txt', 'r')
out = open('output.txt', 'w')


a, b, c = map(int,inp.readline().split(' ')[0:3])
answer = str(max(a,b,c) - min(a,b,c))


print(answer)
out.write(answer)
