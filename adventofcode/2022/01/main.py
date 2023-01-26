import sys 
elves = []
sum = 0

for line in sys.stdin:
    if line.strip():
        sum += int(line.strip())
    else:
        elves.append(sum)
        sum = 0

elves.append(sum)

print(max(elves))