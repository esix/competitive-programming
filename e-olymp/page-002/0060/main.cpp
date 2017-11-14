#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <map>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> xs;
  vector<int> ys;

  int x0, y0;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    xs.push_back(x);
    ys.push_back(y);
    if (i == 0) {
      x0 = x;
      y0 = y;
    }
  }

  xs.push_back(x0);
  ys.push_back(y0);

  double s = 0;
  for (int i = 0; i < n; i++) {
    s += xs[i] * ys[i+1] - xs[i+1] * ys[i];
  }

  if (s < 0) s = -s;
  s /= 2.0;

  cout << std::setprecision (3) << std::fixed << s << endl;

  return 0;
}
