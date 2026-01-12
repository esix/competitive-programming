/**
 * @param {number[]} A
 * @param {number[]} B
 * @return {number}
 */
var minSwap = function(A, B) {
    const n = A.length, a1 = [0], a2 = [1];
    
    for(let i = 1; i < n; i++) {
        a2[i] = n;
        a1[i] = n;
        if (A[i-1] < A[i] && B[i-1] < B[i]){
            a1[i] = Math.min(a1[i], a1[i-1])
            a2[i] = Math.min(a2[i], a2[i-1] +1);
        }
        
        if (B[i-1] < A[i] && A[i-1] < B[i]){
            a2[i] = Math.min(a2[i], a1[i-1]+1);
            a1[i] = Math.min(a1[i], a2[i-1])
        }
    }
   
    return Math.min(a1[n - 1], a2[n - 1])
};
