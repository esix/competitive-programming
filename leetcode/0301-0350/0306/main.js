/**
 * @param {string} num
 * @return {boolean}
 */
var isAdditiveNumber = function(num) {
  for (let i1 = 1; i1 < num.length - 1; i1++) {
      for (let i2 = i1 + 1; i2 < num.length; i2++) {
          let n1 = num.slice(0, i1);
          let n2 = num.slice(i1, i2);
          let n3 = '';
          if (n1.match(/^0+[^0]+$/) || n2.match(/^0+[^0]+$/)) continue;
          
          let valid = true;
          for (let i = i2; i < num.length; i += n3.length) {
              n3 = (+n1 + +n2).toString();
              if (num.slice(i, i + n3.length) !== n3) {
                  valid = false;
                  break;
              }
              n1 = n2;
              n2 = n3;
          }
          if (valid) {
              return true;
          }
      }
  }
  return false;
};
