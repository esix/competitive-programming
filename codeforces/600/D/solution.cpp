#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

long double sqr(long double d) {
  return d * d;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long long int x1, y1, R, x2, y2, r;
  cin >> x1 >> y1 >> R >> x2 >> y2 >> r;

  if(r > R) swap(r,R);

  long long int dd = (x1 - x2) * (x1 - x2)  + (y1 - y2) * (y1 - y2);
  long double d = sqrt(dd);

  long double s = r * r * acos((dd + sqr(r) - sqr(R)) / (2 * d * r)) +
                  R * R * acos((dd + sqr(R) - sqr(r)) / (2 * d * R)) -
                  0.5 * sqrt((-d + r + R) * (d + r - R) * (d - r + R) * (d + r + R));

  cout.precision(11);
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
