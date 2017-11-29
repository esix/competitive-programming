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

  int n, k;
  cin >> n >> k;

  int safe = 1, broken = k;

  for (int i = 0; i < n; i++) {
    int floor;
    string fall_result;
    cin >> floor >> fall_result;
    if (fall_result[0] == 'S') {     // SAFE
      safe = max(safe, floor);
    } else {                         // BROKEN
      broken = min(broken, floor);
    }
  }

  cout << min(k, safe + 1) << ' ' << max(1, broken - 1) << endl;

  return 0;
}
