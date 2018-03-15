#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;


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



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    long long a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) break;

    long long r = A006218(b) - A006218(a - 1);

    cout << r << '\n';
  }

  return 0;
}
