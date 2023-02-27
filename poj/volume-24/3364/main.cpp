#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (1) {
    int n, m, c;
    cin >> n >> m >> c;
    if (n == 0 && m == 0 && c == 0) break;
    int sq = (n - 7) * (m - 7);
    cout << sq / 2 + (sq % 2) * c << endl;
  }

  return 0;
}
