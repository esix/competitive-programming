#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;


double da(double a1, double a2) {
  double res = a2 - a1;
  if(res > M_PI) res = 2 * M_PI - res;
  return res;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector< pair<double, int> > as(n);

  for(int i = 0; i < n; i++) {
    int ix, iy;
    cin >> ix >> iy;
    double len = sqrt(ix * ix + iy * iy);
    double x = double(ix) / len;
    double y = double(iy) / len;
    double a = acos(x);
    if(y < 0) {
      a =  2 * M_PI - a;
    }
    as[i] = make_pair(a, i);
  }

  sort(as.begin(), as.end());

  double min_da = da(as[0].first, as[n-1].first);
  int si = n-1;

  for(int i = 0; i < n - 1; i++) {
    double cda = da(as[i].first, as[i+1].first);
    if(cda < min_da) {
      min_da = cda;
      si = i;
    }
  }

  cout << as[si%n].second + 1 << " " << as[(si+1)%n].second + 1;

  return 0;
}
