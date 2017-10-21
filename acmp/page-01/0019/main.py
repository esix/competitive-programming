inp = open('input.txt', 'r')
out = open('output.txt', 'w')

letters = "ABCDEFGH"

f, l, k = [(ord(s[0]) - ord('A'), ord(s[1]) - ord('1')) for s in inp.readline().split(' ')[0:3]]


def is_beaten_by_l(point, figure):
    return point[0] == figure[0] or point[1] == figure[1]


def is_beaten_by_f(point, figure):
    return is_beaten_by_l(point, figure) or abs(point[0] - figure[0]) == abs(point[1] - figure[1])
    
def is_beaten_by_k(point, figure):
    return abs(point[0] - figure[0]) + abs(point[1] - figure[1]) == 3 and point[0] != figure[0] and point[1] != figure[1]


cnt = 0
for y in range(8):
    for x in range(8):
        point = (x,y)
        if point != f and point != l and point != k and \
           (is_beaten_by_f(point, f) or is_beaten_by_l(point, l) or is_beaten_by_k(point, k)):
            #print (y+1, letters[x], "   !   ", is_beaten_by_f(point, f), is_beaten_by_l(point, l), is_beaten_by_k(point, k))
            cnt += 1
            
   
answer = str(cnt)


print(answer)
out.write(answer)
