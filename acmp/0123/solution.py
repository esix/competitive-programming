s = input()
b = [1]
for c in s:
    if c == '(':
        b = [0] + b
    elif c == ')':
        if len(b) == 1:
            print(0)
            exit(0)
        b = b[1:]
    elif c == '?':
        if len(b) == 1:
            b = [0] + b
        else:
            n = len(b)
            bb = [0 for i in range(n+1)]
            for i in range(n+1):
                if i == 0:
                    bb[0] = b[i+1]
                elif i >= n-1:
                    bb[i] = b[i-1]
                else:
                    bb[i] = b[i-1] + b[i+1]
            b = bb

print(b[0])
