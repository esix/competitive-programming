#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

typedef long long int INT;

INT power(INT a, int n) {
  if (n == 1) return a;
  if (a > 1000000) return 2000000;
  INT a_half = power(a, n / 2);
  if (a_half > 10000) return 2000000;
  return n & 1 ? a * a_half * a_half : a_half * a_half;
}


int solve(int b, int n) {
  if (n == 1) return b;

  // cout << "solve a^" << n << " = " << b << endl;
  int max_a = sqrt(b) + 1, min_a = 1;
  int min_b = 1, max_b = power(max_a, n);
  // cout << "    " << min_a << "^" << n << " = " << min_b << "        " << max_a << "^" << n << " = " << max_b << endl;
  while (max_a - min_a > 1) {
    int mid_a = (max_a + min_a) / 2;
    int mid_b = power(mid_a, n);

    if (mid_b > b) {
      max_a = mid_a;
      max_b = mid_b;
      // cout << "    " << min_a << "^" << n << " = " << min_b << "        " << max_a << "^" << n << " = " << max_b <<  "      " << "<- selected" << endl;
    } else {
      min_a = mid_a;
      min_b = mid_b;
      // cout << "    " << min_a << "^" << n << " = " << min_b << "        " << max_a << "^" << n << " = " << max_b <<  "      " << "selected->" << endl;
    }
  }

  return (b - min_b) < (max_b - b) ? min_a : max_a;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int b, n;
    cin >> b >> n;
    if (b == 0 && n == 0) break;
    INT a = solve(b, n);
    cout << a << endl;
  }

  return 0;
}
