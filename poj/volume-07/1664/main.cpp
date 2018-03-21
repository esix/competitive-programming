#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int solve(int m, int n) {
  if (m == 0 || n == 1) {
    return 1;
  }
  if (m < n) {
    return solve(m, m);
  }
  return solve(m - n, n) + solve(m, n - 1);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int m, n;
    cin >> m >> n;
    cout << solve(m, n) << endl;
  }
  

  return 0;
}
