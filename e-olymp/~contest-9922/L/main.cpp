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


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long long x;
  cin >> x;

  if (x >= 5040000)	{
    cout << ((x / 50400 + 1) * 50400) << '\n';
    return 0;
  }

  for (long long i = x; 100 * i <= 101 * x; i++) {
	  if (A000005(i) >= 100) {
      cout << i << '\n';
      return 0;
    }
  }

  cout << "-1\n";


  return 0;
}
