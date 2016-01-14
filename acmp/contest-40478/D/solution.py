inp = open('input.txt', 'r')
out = open('output.txt', 'w')

N = int(inp.readline())

letters = "ABCEHKMOPTXY"
digits = "0123456789"

for i in range(N):
    s = inp.readline().rstrip()
    if len(s) == 6 and \
       s[0] in letters and  \
       s[1] in digits and \
       s[2] in digits and \
       s[3] in digits and \
       s[4] in letters and \
       s[5] in letters:
        print("Yes")
        out.write("Yes")
    else:
        print("No")
        out.write("No")

    out.write("\n")



