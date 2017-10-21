inp = open('input.txt', 'r')
out = open('output.txt', 'w')


x1,y1,x2,y2 = map(int,inp.readline().split(' ')[0:4])
x0,y0 = map(int,inp.readline().split(' ')[0:2])

# Ax + By + C = 0
A = y1-y2
B = x2-x1
C = x1*y2 - x2*y1

# Bx - Ay + D = 0
D = A*y0 - B*x0

x_ = ( C*A + B*D) / (-A*A - B*B)
y_ = (-A*D + C*B) / (-A*A - B*B)


x = int(x0 + 2* (x_-x0))
y = int(y0 + 2* (y_-y0))


answer=str(x) + ' ' + str(y)

print(answer)
out.write(answer)
