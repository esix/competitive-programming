#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>
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


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  Vector2D<double> A, B, C;
  cin >> A >> B >> C;

  double a = (C - B).len();
  double b = (A - C).len();
  double c = (B - A).len();

  double P = a + b + c;
  double p = P / 2;
  double S = sqrt(p * (p-a) * (p-b) * (p-c));
  
  cout << setprecision(4) << fixed << P << ' ' << S << endl;  

  return 0;
}
