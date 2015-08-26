k, n = map(int, input().split(' '))
cache = [0]
for i in range(1, n+1):
    result = 0
    if i <= k:
        result = 1
    result += sum(cache[max(i-k, 1): i])
    cache.append(result)

print(cache[n])
