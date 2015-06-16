inp = open('input.txt', 'r')
out = open('output.txt', 'w')

k, n = map(int, inp.readline().split(' '))


cache = [0]

for i in xrange(1, n+1):
    result = 0
    if i <= k:
        result = 1
    result += sum(cache[max(i-k, 1): i])
    cache.append(result)
    #print " Step ", i , " : " , result, " slice", cache[max(i-k, 1): i]
    
out.write(str(cache[n]))