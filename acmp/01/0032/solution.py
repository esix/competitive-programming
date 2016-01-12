inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a = list(inp.readline().strip())
b = list(inp.readline().strip())

def max_from(ls):
    if ls[0] == '-':
        return ['-'] + min_from(ls[1:])
    return sorted(ls,reverse=True)

def min_from(ls):
    if ls[0] == '-':
        return ['-'] + max_from(ls[1:])

    zeros = []
    while '0' in ls:
        ls.remove('0')
        zeros.append('0')
    ls = sorted(ls)
    return ls[0:1] + zeros + ls[1:]

a = max_from(a)
b = min_from(b)

answer = str(int(''.join(a)) - int(''.join(b)))


print(answer)
out.write(answer)
