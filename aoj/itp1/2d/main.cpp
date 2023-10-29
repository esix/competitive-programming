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

  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;
  if (0 <= x - r && x + r <= W && 0 <= y - r && y + r <= H) cout << "Yes\n";
  else cout << "No\n";

  return 0;
}
