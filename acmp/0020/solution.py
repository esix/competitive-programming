inp = open('input.txt', 'r')
out = open('output.txt', 'w')


def sign(a):
    return -1 if a < 0 else 1 if a > 0 else 0

N = int(inp.readline())
ls = list(map(int, inp.readline().split(' ')[0:N]))
ss = [sign(ls[i+1] - ls[i]) for i in range(N-1)]


max_l = 0
l = 0 if ss[0] == 0 else 1

for i in range(1, N-1):
    if ss[i] != 0 and ss[i-1] == -ss[i]:
        l += 1
    else:
        if l > max_l:
            max_l = l
        l = 0 if ss[i] == 0 else 1
        
if l> max_l:
    max_l = l
        
answer = str(max_l + 1)


print(answer)
out.write(answer)
