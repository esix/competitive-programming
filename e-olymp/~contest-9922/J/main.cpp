#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

/*
x + y + xy = n      (let x = 0..n, then find y)
x + y(1+n) = n
y = (-x+n) / (x+1)
y = -1 + (n+1) / (x+1)
Not any natural X gives natural Y
  => |y| = num of divisors n+1
*/


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

  int n;
  cin >> n;
  cout << A000005(n+1) << endl;

  return 0;
}
