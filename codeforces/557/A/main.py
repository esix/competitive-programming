n = int(input())
min1, max1 = map(int, input().split(' ')[0:2])
min2, max2 = map(int, input().split(' ')[0:2])
min3, max3 = map(int, input().split(' ')[0:2])

n1 = min1
n -= min1

n2 = min2
n -= min2

n3 = min3
n -= min3

n1 += min((max1 - min1), n)
n -= min((max1 - min1), n)

n2 += min((max2 - min2), n)
n -= min((max2 - min2), n)

n3 += min((max3 - min3), n)
n -= min((max3 - min3), n)

print(n1, n2, n3)
