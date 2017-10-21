import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

S, R1 = map(float, inp.readline().split(' ')[0:2])
answer = str(math.sqrt((math.pi * R1*R1 - S) / math.pi))


print(answer)
out.write(answer)
