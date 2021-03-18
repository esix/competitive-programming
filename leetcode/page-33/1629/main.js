/**
 * @param {number[]} releaseTimes
 * @param {string} keysPressed
 * @return {character}
 */
 var slowestKey = function(releaseTimes, keysPressed) {
  let C = keysPressed[0], T = releaseTimes[0];
  for (let i = 1; i < releaseTimes.length; i++) {
      let c = keysPressed[i], t = releaseTimes[i] - releaseTimes[i-1];
      if (t > T || (t === T && c > C)) {
          C = c;
          T = t;
      }
  }
  return C;
};
