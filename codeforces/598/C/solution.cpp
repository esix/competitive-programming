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

  int getR2() const { return _x * _x + _y * _y; }
  double getR() const { return sqrt(getR2()); }

  double getNX2() const { return double(_x*_x) / double(getR2()); }
  double getNY2() const { return double(_y*_y) / double(getR2()); }

  double getNX()  const { return double(_x) / getR(); }
  double getNY()  const { return double(_y) / getR(); }

  double _a;
};

bool aComparator(const Point& p1, const Point& p2) {
  return p1.getA() < p2.getA();
}

double sqr(double a) {
  return a * a;
}

double dist(const Point& p1, const Point& p2) {
  //double res = p2.getA() - p1.getA();
  //if(res > M_PI) res = 2 * M_PI - res;
  //return res;
  double dx = p1.getNX() - p2.getNX();
  double dy = p1.getNY() - p2.getNY();
  double d = sqr(dx) + sqr(dy);
  return d;
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
  }
  sort(ps.begin(), ps.end(), aComparator);


  double min_d = dist(ps[0], ps[n-1]);
  int si = n-1;

  for(int i = 0; i < n - 1; i++) {
    double d = dist(ps[i], ps[i+1]);
    if(d < min_d) {
      min_d = d;
      si = i;
    }
  }

  cout << ps[si%n].i + 1 << " " << ps[(si+1)%n].i + 1 << endl;

  return 0;
}
