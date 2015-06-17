inp = open('input.txt', 'r')
out = open('output.txt', 'w')

s = inp.readline()


answer = "NO" if "0" in s else "YES"

print(answer)
out.write(answer)
