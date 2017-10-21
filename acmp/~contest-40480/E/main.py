inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n, m = map(int, inp.readline().split(' ')[0:2])
ps = [tuple(map(int, inp.readline().split(' ')[0:2])) for i in range(m)]

def solve(n, ps):
    if n <= 0:
        return 0
    costs = []
    for i in range(len(ps)):
        num, cost = ps[i]
        costs.append( cost + solve(n - num, ps[:i] + ps[i+1:]))
    return min(costs)


answer = str(solve(n, ps))

print(answer)
out.write(answer)
