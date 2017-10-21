import re
g = re.match("^(-?\d+)([*/\\-+])(-?\d+)=(-?\d+)$",open('input.txt', 'r').readline().strip())
if not g:
    open('output.txt', 'w').write("ERROR")
else:
    ops = {
        '+': lambda a,b: a+b,
        '-': lambda a,b: a-b,
        '*': lambda a,b: a*b,
        '/': lambda a,b: a/b if b != 0 else None
    }

    open('output.txt', 'w').write("YES" if int(g.group(4)) == ops[g.group(2)](int(g.group(1)), int(g.group(3))) else "NO")
