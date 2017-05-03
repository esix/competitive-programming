/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    const mo2 = (a, b) => (a + b) / 2;            // median of integers
    const mo3 = (a, b, c) =>  a + b + c - Math.max(a, b, c) - Math.min(a, b, c);
    const mo4 = (a, b, c, d) => (a + b + c + d - Math.max(a, b, c, d) - Math.min(a, b, c, d)) / 2;

    const half = a => Math.floor(a/2);

    // Utility function to find median of single array
    const medianSingle = (A, aStart, aLength) => {
        if (aLength === 0)
            return -1;
        if (aLength % 2 === 0)
            return (A[aStart + half(aLength)] + A[aStart + half(aLength) - 1]) / 2;
        return A[aStart + half(aLength)];
    };

    //  |a| <= |b|
    const findMedianUtil = (A, aStart, aLength, B, bStart, bLength) => {
        console.log(A.slice(aStart, aStart+aLength), B.slice(bStart,bStart+bLength));
        if (aLength === 0)
            return medianSingle(B, bStart, bLength);

        if (aLength == 1) {
            if (bLength == 1)
                return mo2(
                    A[aStart],
                    B[bStart]);

            if (bLength & 1)
                return mo2(
                    B[bStart + half(bLength)],
                    mo3(
                        A[aStart],
                        B[bStart + half(bLength) - 1],
                        B[bStart + half(bLength) + 1]));

            return mo3(
                B[bStart + half(bLength)],
                B[bStart + half(bLength) - 1],
                A[aStart]);

        } else if (aLength == 2) {
            if (bLength == 2)
                return mo4(
                    A[aStart],
                    A[aStart+1],
                    B[bStart],
                    B[bStart+1]);

            if (bLength & 1)
                return mo3(
                    B[bStart + half(bLength)],
                    Math.max(
                        A[aStart],
                        B[bStart + half(bLength) - 1]),
                    Math.min(
                        A[aStart+1],
                        B[bStart + half(bLength) + 1]));

            return mo4(B[bStart + half(bLength)],
                     B[bStart + half(bLength) - 1],
                     Math.max(
                         A[aStart],
                         B[bStart + half(bLength) - 2]),
                     Math.min(
                         A[aStart+1],
                         B[bStart + half(bLength) + 1]));
        }

        const idxA = half(aLength-1);
        const idxB = half(bLength-1);

        if (A[aStart + idxA] <= B[bStart + idxB]) {
            return findMedianUtil(A, aStart + idxA, half(aLength) + 1, B, bStart, bLength - idxA);
        } else {
            return findMedianUtil(A, aStart, half(aLength) + 1, B, bStart + idxA, bLength - idxA);
        }
    };

    if (nums1.length <= nums2.length)
        return findMedianUtil(nums1, 0, nums1.length, nums2, 0, nums2.length);
    else
        return findMedianUtil(nums2, 0, nums2.length, nums1, 0, nums1.length);
};
