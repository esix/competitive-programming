a, b, c, d = map(float, input().split(' '))
print ("YES" if (a == c and b == d) or (a == b and c == d) or (a == d and b ==c) else "NO")
