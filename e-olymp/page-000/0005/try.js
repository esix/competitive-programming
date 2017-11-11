




function solve(n) {
  let results = [];
  for (let i = 1; i <= n; i++) {
    for (let j = i; j <= n; j++) {
      if (i * j == n) {
        results.push(`${i}*${j}`);
      }
    }
  }
  return results;
}


// only number
function solve(n) {
    let results = 0;
    for (let i = 1; i <= n; i++) {
      for (let j = i; j <= n; j++) {
        if (i * j == n) {
          results++;
        }
      }
    }
    return results;
}
  

function f(x)  {
  for (let i = 0; true; i++) {
    if(solve(i).length == x) {
      return i
    }
  }
}