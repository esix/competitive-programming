inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())

cached = {}
def solve(n, player):
    if n == 1 or n == 2 or n == 1000:
        return player
    if n < 1:
        return -1000
    if n in cached:
        return player - cached[n]
    p = solve(n-1000, 1-player)
    if p == player:
        cached[n] = 0
        return player
    p = solve(n-2, 1-player)
    if p == player:
        cached[n] = 0
        return player
    p = solve(n-1, 1-player)
    if p == player:
        cached[n] = 0
        return player
    cached[n] = 1
    return 1 - player


answer = str(solve(n, 0) + 1)

print(answer)
out.write(answer)
