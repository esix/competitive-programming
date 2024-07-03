def swap_case_c(c):
    if c.isupper():
        return c.lower()
    elif c.islower():
        return c.upper()
    else:
        return c

def swap_case(s):
    return ''.join(map(swap_case_c, s))

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)

