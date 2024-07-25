import math
ab = int(input())
bc = int(input())
rads = math.atan2(ab, bc)
degrees = round(math.degrees(rads))
print(str(degrees) + '\xb0')

