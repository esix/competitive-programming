def max_dominoes(n):
    return (n+1)*(n+2) // 2 - (n+1);

s = int(input())


# s = max_dominoes(n) - random(...)

def is_possible(n):
    return max_dominoes(n) >= s

if is_possible(0):
    print (0)
    exit(0)


[n_min, n_max] = [0, 1]

while not is_possible(n_max):
    [n_min, n_max] = [n_max, 2 * n_max]

# now n_max possible

while n_max - n_min > 1:
    mid = (n_max + n_min) // 2
    if (is_possible(mid)):
        [n_min, n_max] = [n_min, mid]
    else:
        [n_min, n_max] = [mid, n_max]

print (n_max)

