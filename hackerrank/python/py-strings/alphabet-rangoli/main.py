def prepare_line(f, t):
    letter = chr(ord('a') + f - 1)
    if f == t:
        return letter
    return letter + '-' + prepare_line(f - 1, t) + '-' + letter

def print_rangoli(size):
    for i in range(size, 1, -1): print(2 * (i - 1) * '-' + prepare_line(size, i) + 2 * (i - 1) * '-')
    for i in range(1, size + 1): print(2 * (i - 1) * '-' + prepare_line(size, i) + 2 * (i - 1) * '-')

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)

