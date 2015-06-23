import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


x1,y1,r1 = map(int,inp.readline().split(' ')[0:3])
x2,y2,r2 = map(int,inp.readline().split(' ')[0:3])

r = math.sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))

if r <= r1 + r2 and r1 <= r + r2 and r2 <= r + r1: 
    answer = "YES"
else: 
    answer="NO"

print(answer)
out.write(answer)
