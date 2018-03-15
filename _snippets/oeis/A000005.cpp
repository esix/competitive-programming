#include <math.h>

template<typename INT>
INT A000005(INT n) {
  INT r = 0;
  const INT N = sqrt(n);

  for (INT i = 1; i <= N; i++) {
    if (n % i == 0) {
      if (n / i == i) {
        r++;
      } else {
        r += 2;
      }
    }
  }
  return r;
}