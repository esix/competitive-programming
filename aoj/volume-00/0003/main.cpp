#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

bool eq(float a, float b) {
  return -1E-6 < a - b && a - b < 1E-6;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double a, b, c;
    cin >> a >> b >> c;
    double aa = a * a, bb = b * b, cc = c * c;
    if (eq(aa, bb + cc) || eq(bb, aa + cc) || eq(cc, aa + bb)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
