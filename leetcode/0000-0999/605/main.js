/**
 * @param {number[]} flowerbed
 * @param {number} n
 * @return {boolean}
 */
 var canPlaceFlowers = function(flowerbed, n) {
    let prev = 0;
    for (let i = 0; i < flowerbed.length; i++) {
        let v = flowerbed[i], next = flowerbed[i+1] || 0;
        
        if (prev === 0 && v === 0 && next === 0) {
            n--;
            prev = 1;
        } else {
            prev = v;   
        }
    }
    return n <= 0;
};
