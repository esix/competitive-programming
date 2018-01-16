#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

#define M 10000007
typedef long long int INT;

int ipow(INT base, INT exp) {
  INT result = 1;
  while (exp) {
    if (exp & 1) {
      result = result * base % M;
    }
    exp >>= 1;
    base = base * base % M;
  }
  return result;
}


INT solve(INT n, INT k) {
  INT s_1 = ipow(n-1, k) % M;
  INT s_2 = ipow(n, k) % M;
  INT p_1 = ipow(n-1, n-1) % M;
  INT p_2 = ipow(n, n) % M;
  return (2 * s_1 + s_2 + (2 * p_1) + p_2) % M;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int n, k;
    cin >> n >> k;
    if (n == 0) break;
    cout << solve(n, k) << '\n';
  }

  return 0;
}
