#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

typedef long long int INT;

INT f(INT n) {
  if ((n & 1) == 0) return n >> 1;
  else return n + n + n + 1;
}


INT solve(INT n) {
  INT max_n = n;
  while (n != 1) {
    n = f(n);
    max_n = max(max_n, n);
  }
  return max_n;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int testId, n;
    cin >> testId >> n;
    cout << testId << ' ' << solve(n) << '\n';
  }

  return 0;
}
