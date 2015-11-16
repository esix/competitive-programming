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


struct Point {
  int _x;
  int _y;
  int i;
  Point() : _x(0), _y(0), _a(0), i(0) {}

  Point(int px, int py, int pi): _x(px), _y(py), i(pi) {
    double len = sqrt(_x * _x + _y * _y);
    double x = double(_x) / len;
    double y = double(_y) / len;
    _a = acos(x);
    if(y < 0) {
      _a =  2 * M_PI - _a;
    }
  }

  double getA()const { return _a; }

  double _a;
};

bool aComparator(const Point& p1, const Point& p2) {
  return p1.getA() < p2.getA();
}



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

  vector<Point> ps(n);

  for(int i = 0; i < n; i++) {
    int ix, iy;
    cin >> ix >> iy;
    ps[i] = Point(ix, iy, i);
    cout << fixed << setprecision(16) << ps[i].getA() << endl;
  }
  sort(ps.begin(), ps.end(), aComparator);
  cout << "-----" << endl;
  cout << "1-2 : " << fixed << setprecision(16) << (ps[1].getA() - ps[0].getA())  << endl;
  cout << "3-4 : " << fixed << setprecision(16) << (ps[3].getA() - ps[2].getA())  << endl;


  double min_da = da(ps[0].getA(), ps[n-1].getA());
  int si = n-1;

  for(int i = 0; i < n - 1; i++) {
    double cda = da(ps[i].getA(), ps[i+1].getA());
    if(cda < min_da) {
      min_da = cda;
      si = i;
    }
  }

  cout << ps[si%n].i + 1 << " " << ps[(si+1)%n].i + 1 << endl;

  return 0;
}
