def print_formatted(n):
    data = [[f.format(i) for i in range(1, n + 1)] for f in ["{0:d}", "{0:o}", "{0:X}", "{0:b}"]]
    l = max([max(map(len, column)) for column in data])
    for i in range(n):
        print(data[0][i].rjust(l), data[1][i].rjust(l), data[2][i].rjust(l), data[3][i].rjust(l))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)

