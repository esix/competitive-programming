import sys

heights = []

for line in sys.stdin:
    heights.append(line.strip())

def get_height(cell):
    i, j = cell
    c = heights[i][j]
    if c == 'S': c = 'a'
    if c == 'E': c = 'z'
    return ord(c) - ord('a')

N = len(heights)
M = len(heights[0])

start = None
end = None

for i in range(N):
    for j in range(M):
        if heights[i][j] == 'S': start = (i, j)
        if heights[i][j] == 'E': end = (i, j)



def search(starts):
    visited = []
    queue = starts.copy()
    prev = {}
    while len(queue):
        current = queue[0]
        queue = queue[1:]
        if end == current:
            break
        visited.append(current)

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            (i, j) = current
            next = (i + di, j + dj)
            if next not in visited and \
            next not in queue and \
            0 <= next[0] < N and \
            0 <= next[1] < M and \
            get_height(next) - get_height(current) <= 1: 
                queue.append(next)
                prev[next] = current

    path = []
    p = end

    while p not in starts:
        p = prev[p]
        path.append(p)
    return len(path) 


print(search([start]))

starts = []
for i in range(N):
    for j in range(M):
        if heights[i][j] == 'a' or heights[i][j] == 'S':
            starts.append((i, j))
print(search(starts))
