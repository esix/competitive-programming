#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;


#define EPS 1e-5;

bool eq(double a, double b) {
  return abs(a-b) < EPS;
}

double sqr(double x) {
  return x * x;
}

int solve(double x1, double y1, double r1, double x2, double y2, double r2) {
  if (r2 < r1) {
    swap(r1, r2);
    swap(x1, x2);
    swap(y1, y2);
  }
  // r1 <= r2
  
  double dx = abs(x1 - x2);
  double dy = abs(y1 - y2);
  double dist = sqrt(sqr(dx) + sqr(dy));

  if (eq(x1, x2) && eq(y1, y2) && eq(r1, r2)) return r1 == 0 ? 1 : -1;

  if (eq(dist, r1 + r2) || eq(dist, r2 - r1)) return 1;

  if (r1 + r2 < dist) return 0;    // outside, too far
  if (dist + r1 < r2) return 0;    // r1 inside r2
  
  return 2;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  double x1, y1, r1, x2, y2, r2;
  cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

  cout << solve(x1, y1, r1, x2, y2, r2) << endl;
  
  return 0;
}
