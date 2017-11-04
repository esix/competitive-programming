#include <math.h>


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





template<typename NUMBER>
class Line {
  NUMBER a, b, c;
};


template<typename NUMBER>
class LineSegment2D {
  Vector2D<NUMBER> p1;
  Vector2D<NUMBER> p2;

};