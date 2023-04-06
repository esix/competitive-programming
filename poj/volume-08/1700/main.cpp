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

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int n;
    cin >> n;
    vector<int> cost(n);
    for (int i = 0; i < n; i++) cin >> cost[i];
    sort(cost.begin(), cost.end());

    if (n == 1) {
      cout << cost[0] << endl;
      continue;
    }

    int pp = cost[0], p = cost[1];
    for (int i = 2; i < n; i++) {
      int cost1 = p + cost[i] + cost[0];
      int cost2 = pp + 2 * cost[1] + cost[0] + cost[i];
      pp = p;
      p = min(cost1, cost2);
    }
    cout << p << endl;
  }

  return 0;
}
