#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <cmath>


using namespace std;

double dist(int x, int y, int xx, int yy) {
  double dx = x - xx, dy = y - yy;
  return sqrt(dx * dx + dy * dy);
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int n, x, y, xx, yy;
    double r;
    cin >> x >> y >> r;
    if (r < 0) break;
    cin >> n;

    vector<pair<int, int> > dots;

    for (int i = 0; i < n; i++) {
      cin >> xx >> yy;
      if (dist(x, y, xx, yy) <= r + 1e-6) {
        dots.push_back(make_pair(xx - x, yy - y));
      }
    }

    int best = 0;
    for (int i = 0; i < dots.size(); i++) {
      int r = 0, plus = 0, minus = 0, zero = 0;
      for (int j = 0; j < dots.size(); j++) {
        int side = 0;
        int z = -dots[i].first * dots[j].second + dots[i].second * dots[j].first;
        if (z > 0) {
          plus++;
        } else if (z < 0) {
          minus++;
        } else {
          zero++;
        }
      }
      best = max(best, max(plus + zero, minus + zero));
    }

    cout << best << endl;
  }


  return 0;
}
