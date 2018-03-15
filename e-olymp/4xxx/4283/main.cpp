#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

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



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  cout << A006218(n) << endl;

  return 0;
}
