#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  double a0, a_last;
  cin >> a0 >> a_last;
  vector<double> c(n + 1);
  for (int i = 1; i <= n; i++) cin >> c[i];


  double k = 0.5, b = 0.5 * a_last - c[n];

  for (int i = n - 1; i >= 1; i--) {
    b = 2 * (b / 2 - c[i]) / (2 - k);
    k = 1 / (2 - k);
  }

  cout << fixed << setprecision(2) << (k * a0  + b) << endl;
  return 0;
}
