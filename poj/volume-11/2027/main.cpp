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
    int a, b;
    cin >> a >> b;
    if (a < b) {
      cout << "NO BRAINS\n";
    } else {
      cout << "MMM BRAINS\n";
    }
  }

  return 0;
}
