function solution(A) {
    var left = 0,
        right = A.length ? A.slice(1).reduce(function(prev, cur) { return prev + cur }) : 0,
        result = [];
        
    for(var i = 0; i < A.length; i++) {
        if(left == right) result.push(i);
        if(left == right) return i;
        left += A[i];
        right -= A[i+1]||0;
    }
    return -1;
}
