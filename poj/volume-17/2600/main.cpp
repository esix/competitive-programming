#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <limits>
#include <math.h>

using namespace std;

const double PI = 3.14159265358979323846;
const double EPS = 1E-6;


typedef pair<double, double> point_t;

point_t rotate(point_t p, point_t center, double a) {
	double x = p.first - center.first, y = p.second - center.second;
	double xx = x * cos(a) - y * sin(a);
	double yy = x * sin(a) + y * cos(a);
  return make_pair(xx + center.first, yy + center.second);
}

double sqr(double x) {
	return x * x;
}

double dist(point_t a, point_t b) {
	return sqrt(sqr(a.first - b.first) + sqr(a.second - b.second));
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<point_t> M(n);
	vector<double> a(n);

  for(int i = 0; i < n; i++) cin >> M[i].first >> M[i].second;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] *= PI / 180.0;
  }

  point_t p;

	point_t deltas[8]={
		point_t(1, 0), 
		point_t(1, 1),
		point_t(1, -1),
		point_t(0, 1),
		point_t(0, -1),
		point_t(-1, 0),
		point_t(-1, 1),
		point_t(-1, -1)};


  while (true) {
    for(int i = 0; i < 8; i++) {
      point_t pp = point_t(p.first + deltas[i].first, p.second + deltas[i].second);
      point_t tp = pp;
      for (int j = 0; j < n; j++) tp = rotate(tp, M[j], a[j]);
      if (fabs(dist(pp, tp)) < EPS) {
        p = pp;
        goto outer;
      }
      if (dist(pp, tp) - dist(p, tp) < EPS) p = pp;
    }
  }
  outer:

  cout << p.first << ' ' << p.second << endl;
  for (int i = 0; i + 1 < n; i++) {
    p = rotate(p, M[i], a[i]);
    cout << p.first << ' ' << p.second << endl;
  }
  return 0;
}
