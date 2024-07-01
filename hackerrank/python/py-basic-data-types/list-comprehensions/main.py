def all_tuples(x, y, z):
    for i in range(x + 1):
        for j in range(y + 1):
            for k in range(z + 1):
                yield [i, j, k]

if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    print(list(filter(lambda e: e[0] + e[1] + e[2] != n, all_tuples(x, y, z))))