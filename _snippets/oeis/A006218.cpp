#include <math.h>

template<typename INT>
INT A006218(INT n) {
	INT r = 0;
	for (INT i = 1; i <= sqrt(n); i++) {
    r += n / i;
  }

	INT N = n / ((INT)sqrt(n) + 1);

	for (INT i = 1; i <= N; i++) {
    r += i * (n / i - n / (i + 1));
  }
	return r;
}
