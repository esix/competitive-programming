#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;


template<typename N>
class Vector2D {
public:
  N x;
  N y;

  Vector2D(): x(0), y(0) {}
  Vector2D(N xx, N yy): x(xx), y(yy) {};

  Vector2D<N> operator-(const Vector2D<N>& v) {
    return Vector2D<N>(x - v.x, y - v.y);
  }

  double len() const {
    return sqrt(x * x + y * y);
  }

  template <typename T>
  friend std::istream& operator>>(std::istream& is, Vector2D<T>& v);

  template <typename T>
  friend std::ostream& operator<<(std::ostream& os, const Vector2D<T>& v);
};

template<typename T>
std::istream& operator>>(std::istream& is, Vector2D<T>& v)
{
  return is >> v.x >> v.y;
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Vector2D<T>& v)
{
  return os << '(' << v.x << ',' << v.y << ')';
}

template<typename N>
double dot(Vector2D<N> a, Vector2D<N> b) {
  return a.x * b.x + a.y * b.y;
}


double _abs(double a) {
  return a < 0 ? -a : a;
}

double eq(double a, double b) {
  return _abs(a-b) < 1E-5;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    Vector2D<int> A, B, C, D;
    cin >> A >> B >> C >> D;
    
    Vector2D<int> a = (B - A);
    Vector2D<int> b = (C - B);
    Vector2D<int> c = (D - C);
    Vector2D<int> d = (A - D);
    
    double la = a.len();
    double lb = b.len();
    double lc = c.len();
    double ld = d.len();

    double ca = dot(d, a) / (ld * la);
    double cb = dot(a, b) / (la * lb);
    double cc = dot(b, c) / (lb * lc);
    double cd = dot(c, d) / (lc * ld);

    bool isEqSides = eq(la, lb) && eq(lb, lc) && eq(lc, ld);
    bool isAnglesRight = eq(ca, 0) && eq(cb, 0) && eq(cc, 0) && eq(cd, 0);

    cout << "Case " << i << ": ";

    if (isEqSides && isAnglesRight) {
      cout << "Square";
    } else if (isEqSides && !isAnglesRight) {
      cout << "Rhombus";
    } else if (isAnglesRight && eq(la, lc) && eq(lb, ld)) {
      cout << "Rectangle";
    } else {
      cout << "Other";
    }

    cout << endl;
  }


  return 0;
}
