/**
 * @param {number[][]} grid
 * @return {number}
 */
 var countNegatives = function(grid) {
    const countNegativeInVector = (vec) => {
        let result = 0;
        for (let i = vec.length - 1; i >= 0; i--) {
            if (vec[i] < 0) result++;
            else break;
        }
        return result;
    }
    
    let result = 0;
    for (let i = grid.length - 1; i >= 0; i--) {
        let c = countNegativeInVector(grid[i]);
        if (c === 0) break;
        result += c;
    }
    return result;
  };
  
