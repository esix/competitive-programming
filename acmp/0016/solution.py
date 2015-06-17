inp = open('input.txt', 'r')
out = open('output.txt', 'w')

N = int(inp.readline())

#cache = [1]
#
#triangulars = [ 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120 ]
#
#for n in range(1, N+1):
#    result = 0
#    for j in range(n // 2 + n % 2, n+1):
#        result += cache[n - j]
#        if j == n // 2:
#            result -= 1
#
#    #if n % 2 == 0 and n in triangulars:
#    #    result += 1
#        
#    cache.append(result)
#    print(n, result)
#    
#print (cache)



cached = {}


def solve(n, width):
    max_cells_in_width = (width + 1) * width / 2
    if n > max_cells_in_width:
        #print("solve ",n,width,"=", 0)
        return 0
    
    if n == max_cells_in_width:
        #print("solve ",n,width,"=", 1)
        return 1
    
    if n == 0:
        #print("solve ",n,width,"=", 1)
        return 1
    
    if (n, width) in cached:
        return cached[(n, width)]
    
    result = 0
    for i in range(1, min(width, n) + 1):
        #print ("<", n-i, i-1, ">")
        result += solve(n-i, i-1)
        
    cached[(n, width)] = result

    #print("solve ",n,width,"=", result)
    return result
answer = str(solve(N, N))




#print ([solve(i, i) for i in range(0, N+1) ])


#answer = str(cache[N])

print(answer)
out.write(answer)
