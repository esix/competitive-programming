inp = open('input.txt', 'r')
out = open('output.txt', 'w')

N = int(inp.readline())


def baseconvert(n, base):
    """convert positive decimal integer n to equivalent in another base (2-36)"""
    digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    try:
        n = int(n)
        base = int(base)
    except:
        return ""
    if n < 0 or base < 2 or base > 36:
        return ""
    s = ""
    while 1:
        r = n % base
        s = digits[r] + s
        n = n // base
        if n == 0:
            break
    return s

def value(s):
    return len(s) + len(set(s))


for i in range(N):
    n = int(inp.readline())
    
    min_base = 0
    min_str = ""
    min_val = 999999999
    
    for b in range(2, 33):
        s = baseconvert(n,b)
        val = value(s)
        if val < min_val:
            min_base = b
            min_val = val
            min_str = s
    
    out.write(str(min_base) + " " + str(min_str) + "\n")


