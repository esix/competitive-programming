
#include <math.h>

template<typename INT>
INT A048691(INT n) {
  INT r = 1;

  for (INT i = 2; i <= sqrt(n); i++) {
    INT p = 0;     // power of prime

    while (n % i == 0) {
      n /= i;
      p++;
    }

    r *= 2 * p + 1;
  }
  if (n > 1) r *= 3;

  return r;
}
