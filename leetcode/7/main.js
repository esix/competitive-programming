/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    const a = new Int32Array([x, 0, 0, 0]);
    while (a[0]) {
        a[2] = a[1];
        a[3] = a[1] * 10 + a[0] % 10;
        if ((a[3] - a[0] % 10) / 10  !== a[2]) {
            return 0;
        }
        a[1] = a[3];
        console.log(a[1], a[2]);
        a[0] /= 10;
    }
    return a[1];
};
