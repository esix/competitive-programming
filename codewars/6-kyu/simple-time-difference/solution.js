function solve(arr){
  const ts = arr.map(t => t.match(/^(\d+):(\d+)/).slice(1)).map(([hh, mm]) => + mm + hh * 60).sort((a, b) => a - b);
  let intervals = [24 * 60 + ts[0] - ts[ts.length - 1] - 1];
  for (let i = 1; i < ts.length; i++) intervals.push(ts[i] - ts[i - 1] - 1);
  let maxInterval = Math.max.apply(Math, intervals);
  return String(Math.floor(maxInterval / 60)).padStart(2, '0') + ':' + 
         String(Math.floor(maxInterval % 60)).padStart(2, '0');
}