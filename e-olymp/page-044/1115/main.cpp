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


double sqr(double x) {
  return x * x;
}

double len(int x1, int y1, int z1, int x2, int y2, int z2) {
  return sqrt(sqr(x2-x1) + sqr(y2-y1) + sqr(z2-z1));
}


double solve(int x1, int y1, int z1, int x2, int y2, int z2, int x3, int y3, int z3) {
  double a = len(x1, y1, z1, x2, y2, z2);
  double b = len(x2, y2, z2, x3, y3, z3);
  double c = len(x3, y3, z3, x1, y1, z1);
  double p = (a + b + c) / 2;
  double r = sqrt((p-a) * (p-b) * (p-c) / p);
  double R = a * b * c / (4 * sqrt(p * (p-a) * (p-b) * (p-c)));
  return sqr(r) / sqr(R);
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x1, y1, z1, x2, y2, z2, x3, y3, z3;
  while (cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> x3 >> y3 >> z3) {
    double res = solve(x1, y1, z1, x2, y2, z2, x3, y3, z3);
    if (res < 1E-3) {
      cout << "Zero!" << endl;
    } else {
      cout << setprecision(3) << fixed << res << endl;
    }
  }

  return 0;
}
