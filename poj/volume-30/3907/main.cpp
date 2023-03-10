#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

typedef pair<double, double> point_p;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  
  while (true) {
    int n;
    cin >> n;
    if (n == 0) break;
    double result = 0;

    point_p p0;
    cin >> p0.first >> p0.second;
    point_p prev = p0;

    for (int i = 1; i <= n; i++) {
      point_p p;

      if (i == n) {
        p = p0;
      } else {
        cin >> p.first >> p.second;
      }

      result += (prev.first - p.first) * (prev.second + p.second);
      prev = p;
    }

    cout << round(abs(result) / 2.0) << endl;
  }

  return 0;
}
