#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <iomanip>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<float> results;
  results.push_back(0.0);
  float f = 0;

  for (int i = 2; f <= 5.20; i++) {
      f += 1 / (float)i;
      results.push_back(f);
  }

  while (true) {
      cin >> f;
      if (f == 0.0f) {
          break;
      }
      auto it = lower_bound(results.begin(), results.end(), f);
      cout << distance(results.begin(), it) << " card(s)\n";
  }
  return 0;
}
