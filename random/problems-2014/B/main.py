n, k, cd, cp = map(int, input().split())
d = list(zip(map(int, input().split()), range(1, cd + 1)))
p = list(zip(map(int, input().split()), range(1, cp + 1)))
d.sort(reverse=True)
p.sort(reverse=True)

result = -1

for i in range(min(cd, k) + 1):
    j = min(cp, k - i)
    current_d = d[0:i]
    current_p = p[0:j]

    current_result = sum([t[0] for t in current_d]) * (100 + sum([t[0] for t in current_p]))
    if current_result > result:
        result = current_result
        result_d = current_d
        result_p = current_p


print(len(result_d), len(result_p))
print(*[t[1] for t in reversed(result_d)])
print(*[t[1] for t in reversed(result_p)])
