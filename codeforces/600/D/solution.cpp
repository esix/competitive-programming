#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

double sqr(double d) {
  return d * d;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x1, y1, R, x2, y2, r;
  cin >> x1 >> y1 >> R >> x2 >> y2 >> r;

  if(r > R) swap(r,R);

  double d = sqrt(sqr(x1 - x2) + sqr(y1 - y2));
  double s = sqr(r) * acos((sqr(d) + sqr(r) - sqr(R)) / (2 * d * r)) +
             sqr(R) * acos((sqr(d) + sqr(R) - sqr(r)) / (2 * d * R)) -
             0.5 * sqrt((-d + r + R) * (d + r - R) * (d - r + R) * (d + r + R));

  cout.precision(17);
  if(isnan(s)) {
    if(d < R) {
      cout << 3.141592653589793238 * r * r;
    } else {
      cout << 0;
    }
  } else {
    cout << s;
  }
  cout << endl;
  return 0;
}
