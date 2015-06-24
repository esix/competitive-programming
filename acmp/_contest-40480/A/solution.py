inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())

if 1 <= n <= 2 or n == 12:
    answer = "Winter"
elif 3 <= n <= 5:
    answer = "Spring"
elif 6 <= n <= 8:
    answer = "Summer"
elif 9 <= n <= 11:
    answer = "Autumn"
else:
    answer = "Error"

print(answer)
out.write(answer)
