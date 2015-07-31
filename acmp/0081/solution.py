I = open('input.txt', 'r')
n = int(I.readline())
a = list(map(int, I.readline().split(' ')[0:n]))
open('output.txt', 'w').write(str(min(a)) + " " + str(max(a)))
