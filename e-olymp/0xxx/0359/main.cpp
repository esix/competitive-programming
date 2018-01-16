#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>
#include <iomanip>


using namespace std;

const double EPS = 1e-8;


//
// find solution for circle (0, 0) 1
//
double solve(double x1, double y1, double x2, double y2) {
  double dx = x2 - x1;
  double dy = y2 - y1;
  // x = x1 + t * dx
  // y = y1 + t * dy
  // x^2 + y^2 = 1
  // (dx*t + x1)^2 + (dy*t + y1)^2 = 1
  // (dx^2 + dy^2)t^2 + 2(x1*dx + y1*dy)t + (x1^2 + y1^2 - 1) = 0

  double a = dx*dx + dy*dy;
  double b = 2 * (x1*dx + y1*dy);
  double c = x1*x1 + y1*y1 - 1;

  double d = b * b - 4 * a * c;

  // cout << "a=" << a << "; b=" << b << "; c=" << c << "; d=" << d << endl;

  if (d < -EPS) return -1;
  if (abs(d) < EPS) return 0;

  // parametric t's of intersections
  double t1 = (-b + sqrt(d)) / (2 * a);
  double t2 = (-b - sqrt(d)) / (2 * a);

  // first point of intersection
  double x_1 = x1 + t1 * dx;
  double y_1 = y1 + t1 * dy;

  // second point of intersection
  double x_2 = x1 + t2 * dx;
  double y_2 = y1 + t2 * dy;

  // cout << "Point1:" << x_1 << ", " << y_1 << endl;
  // cout << "Point1:" << x_2 << ", " << y_2 << endl;
  double dist = sqrt((x_2 - x_1)*(x_2 - x_1) + (y_2 - y_1)*(y_2 - y_1));
  return dist;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  double r, x, y, x1, y1, x2, y2;
  cin >> r >> x >> y >> x1 >> y1 >> x2 >> y2;

  // center circle
  x1 -= x;
  y1 -= y;
  x2 -= x;
  y2 -= y;

  x1 /= r;
  y1 /= r;
  x2 /= r;
  y2 /= r;

  double res = solve(x1, y1, x2, y2);
  if (res == -1) {
    cout << -1 << endl;
  } else if (res == 0) {
    cout << 0 << endl;
  } else {
    cout << std::setprecision(5) << std::fixed << res * r << endl;
  }

  return 0;
}
