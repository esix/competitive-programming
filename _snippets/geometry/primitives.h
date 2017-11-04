#include <math.h>


template<typename NUMBER>
class Vector2D {
public:
  NUMBER x;
  NUMBER y;

  Vector2D(): x(0), y(0) {}
  Vector2D(T xx, T yy): x(xx), y(yy) {};

  template <typename T>
  friend std::ostream& operator<<(std::ostream& os, const Rational<T>& r);

};


template<typename INT>
std::ostream& operator<<(std::ostream& os, const Rational<INT>& r)
{
    os << r.n;
    if(r.d != Rational<INT>::E) os << '/' << r.d;
    return os;
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