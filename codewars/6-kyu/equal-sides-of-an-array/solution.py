def find_even_index(arr):
    sums = []
    acc = 0
    back = sum(arr)
    for i in xrange(len(arr)):
        a  = arr[i]
        back -= a
        if back == acc:
            return i
        acc += a
    return -1
    
