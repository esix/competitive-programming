#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

double len(double dx, double dy) {
  return sqrt(dx * dx + dy * dy);
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int sx, sy, fx, fy;
  cin >> sx >> sy >> fx >> fy;
  
  int n, k, vmax;
  cin >> n >> k >> vmax;

  vector<int> wx(k);
  vector<int> wy(k);

  {
    int cur_wx = 0, cur_wy = 0, cur_i = 0;
    for(int i = 0; i < n; i++) {
      int t, new_wx, new_wy;
      cin >> t >> new_wx >> new_wy;
      while (cur_i < t) {
        wx[cur_i] = cur_wx;
        wy[cur_i] = cur_wy;
        cur_i++;
      }
      cur_wx = new_wx;
      cur_wy = new_wy;
    }
    while (cur_i < k) {
      wx[cur_i] = cur_wx;
      wy[cur_i] = cur_wy;
      cur_i++;
    }
  }

  int sum_wx = 0, sum_wy = 0;
  for(int i = 0; i < k; i++) {
    sum_wx += wx[i];
    sum_wy += wy[i];
  }

  int fx_ = fx - sum_wx;
  int fy_ = fy - sum_wy;

  double dist_x = fx_ - sx;
  double dist_y = fy_ - sy;

  if (len(dist_x, dist_y) > k * vmax) {
    cout << "No\n";
    return 0;
  }

  double dx = dist_x / k;
  double dy = dist_y / k;

  double x = sx;
  double y = sy;

  cout << "Yes\n";
  for (int i = 0; i < k; i++) {
    x += dx;
    y += dy;
    x += wx[i];
    y += wy[i];
    cout << x << ' ' << y << "\n";
  }

  return 0;
}
