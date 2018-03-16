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

  int n;
  cin >> n;
  cout << A000005(n) << endl;
  return 0;
}
