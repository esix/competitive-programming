#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <cmath>


using namespace std;

typedef pair<double, double> coord_t;
typedef vector<coord_t> coords_t;

double sqr(double x) { return x * x; }


double dist(const coord_t& a, const coord_t& b) {
  return sqrt(sqr(a.first - b.first) + sqr(a.second - b.second));
}


bool can_solve(int n, int c, const coords_t& coords, double max_dist) {
  //
  // TODO: check if we can place c depots with distances 2 * max_dist
  //    make graph (connected if dist(a, b) <= 2 * max_dist + eps)
  //    find in graph maximum c centers

  

  return false;
}

double solve(int n, int c, const coords_t& coords) {
  if (n == c) return 0;

  double max_dist = 0;                        // CAN be solved
  double min_dist = 0;                        // can NOT be solved

  vector < vector<double> > ds(n, vector<double>(n));

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      double d = dist(coords[i], coords[j]);
      if (max_dist < d) max_dist = d;
      ds[i][j] = ds[j][i] = d;
    }
  }

  // binary search 
  while (max_dist - min_dist > 1e-6) {
    double middle = (max_dist + min_dist) / 2.0;
    if (can_solve(n, c, coords, middle)) {
      max_dist = middle;
    } else {
      min_dist = middle;
    }
  }  

  return max_dist;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int n, c;
    cin >> n >> c;
    coords_t coords(n);

    for (int i = 0; i < n; i++) {
      double x, y;
      cin >> x >> y;
      coords[i] = make_pair(x, y);
    }

    cout << solve(n, c, coords) << endl;
  }

  return 0;
}
