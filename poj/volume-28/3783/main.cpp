#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <limits>

using namespace std;


std::vector<std::vector<int> > cache(51, std::vector<int>(1001));


int solve(int b, int m) {
  if (b == 1) return m;
  if (m == 1) return 1;
  if (m == 0) return 0;

  if (cache[b][m]) return cache[b][m];

  int result = numeric_limits<int>::max();
  for (int i = 1; i <= m; i++) {
    int c = max(solve(b, m - i), solve(b - 1, i - 1)) + 1;
    if (c < result) {
      result = c;
    }
  }
  cache[b][m] = result;
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int P;
  cin >> P;

  for (int p = 0; p < P; p++) {
    int n, b, m;
    cin >> n >> b >> m;
    cout << n << ' ' << solve(b, m) << endl;
  }

  return 0;
}
