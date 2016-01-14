inp = open('input.txt', 'r')
out = open('output.txt', 'w')

w, h, r = map(int, inp.readline().split(' ')[0:3])
rect_size = min(w, h)


if rect_size >= 2*r:
    answer = "YES"
else:
    answer = "NO"

print(answer)

out.write(answer)
