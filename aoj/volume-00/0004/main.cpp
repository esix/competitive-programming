#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  float a, b, c, d, e, f;
  while (cin >> a >> b >> c >> d >> e >> f) {
    float d0 = a * e - b * d;
    float dx = c * e - b * f;
    float dy = a * f - c * d;
    float x = dx / d0;
    float y = dy / d0;
    if (abs(x) < 1e-3) x = 0;
    if (abs(y) < 1e-3) x = 0;
    cout << std::fixed << std::setprecision(3) << x << ' ' << y << endl;
  }

  return 0;
}
