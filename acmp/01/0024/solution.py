inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n, m = map(int, inp.readline().split(' ')[0:2])


if m == 0:
    answer = "1"
elif m == 1:
    answer = str(n)
else:
    max_d = (n - m) // (m - 1)
    res = 0
    for d in range(max_d+1):
        res += n - (m + d * (m-1)) + 1
    
    answer = str(res)


print(answer)
out.write(answer)
