#include <iostream>


#define ABS(x) ((x) >= 0 ? (x) : -(x))


template <typename INT>
INT GCD(INT a, INT b) {
	return b == 0 ? a : GCD(b, a % b);
}


//
// Invariant: d > 0
//
template<typename INT>
class Rational {
public:
  class ValueException: public std::exception { virtual const char* what() const throw() { return "Invalid value";  } };
	static const INT Z = 0;
	static const INT E = 1;

  Rational()                       : n(Z),   d(E)     {}
  Rational(INT num)                : n(num), d(E)     {}
  Rational(const Rational<INT>& r) : n(r.n), d(r.d)   {}
  Rational(INT num, INT denom)     : n(num), d(denom) { if(d == 0) throw ValueException(); reduce(); }

  INT numerator()   const { return n;     }
  INT denominator() const { return d;     }
  INT floor()       const { return n / d; }

  Rational<INT> operator-() const { return Rational(-n, d); }

  Rational operator+(const Rational<INT>& r) const { return Rational((n * r.d) + (r.n * d), r.d * d); }
  Rational operator-(const Rational<INT>& r) const { return Rational((n * r.d) - (r.n * d), r.d * d); }
  Rational operator*(const Rational<INT>& r) const { return Rational(n * r.n, d * r.d); }
	Rational operator/(const Rational<INT>& r) const { if(r.is_zero() throw ValueException(); return Rational(n * r.d, d * r.n); }

  Rational operator*(const INT v) const { return Rational(n * v, d); }
  // TODO: right multiplication/addition

  bool operator < (const INT v) const { return n <  d*v; }
  bool operator <=(const INT v) const { return n <= d*v; }
  bool operator > (const INT v) const { return n >  d*v; }
  bool operator >=(const INT v) const { return n >= d*v; }
	bool operator ==(const INT v) const { return n == v && d == E; }

  bool is_integer() const { return d == E; }
	bool is_zero()    const { return n == Z; }

private:
  INT n, d;

  void reduce() {
    if(d < 0) { d = -d; n = -n; }
		INT rdc = (d > ABS(n)) ? GCD<INT>(d, ABS(n)) : GCD<INT>(ABS(n), d);
    n /= rdc;
    d /= rdc;
  }

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



//
// Tests area
//
//
using namespace std;
int main() {
	Rational<int> r;
	cout << "Default: " << r << endl;

	r += 5;


	return 0;
}
