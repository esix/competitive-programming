#include <iostream>
#include <algorithm>

using namespace std;

#define ABS(x) ((x) >= 0 ? (x) : -(x))

template <typename T>
T GCD(T n1, T remainder) {
	if(remainder==0)
		return(n1);
	else
    return GCD(remainder, n1 % remainder);
}


template<typename T>
T LCM(T a, T b) {
  return ABS(a) * ABS(b) / GCD(a,b);
}




template<typename T>
class Rational {
public:

  class ValueException: public exception {
    virtual const char* what() const throw() {
      return "Invalid denominator";
    }
  };

  Rational()                     : n(0), d(static_cast<T>(1)) {}
  Rational(T num)                : n(num), d(1) {}
  Rational(const Rational<T>& r) : n(r.n), d(r.d) {}

  Rational(T num, T denom) : n(num), d(denom){
    if(d == 0) throw ValueException();
    reduce();
  }

  T numerator()   const { return n; }
  T denominator() const { return d; }
  T floor()       const { return n / d; }

  Rational<T> operator-() const { return Rational(-n, d); }

  Rational operator+(const Rational<T>& r) const { return Rational((n * r.d) + (r.n * d), r.d * d); }
  Rational operator-(const Rational<T>& r) const { return Rational((n * r.d) - (r.n * d), r.d * d); }
  Rational operator*(const Rational<T>& r) const { return Rational(n * r.n, d * r.d); }

  Rational operator*(const T v) const { return Rational(n * v, d); }
  // TODO: right multiplication
  bool operator < (const T v) const { return n <  d*v; }    // d > 0
  bool operator <=(const T v) const { return n <= d*v; }
  bool operator > (const T v) const { return n >  d*v; }
  bool operator >=(const T v) const { return n >= d*v; }

  bool is_integer() const { return d == static_cast<T>(1); }

private:
  T n, d;

  void reduce() {
	  T rdc;
    if(d < 0) {
      d = -d; n = -n;
    }
    if(d > ABS(n))
      rdc = GCD<T>(d, ABS(n));
    else
      rdc = GCD<T>(ABS(n), d);

    n /= rdc;
    d /= rdc;
  }

  template <typename K>
  friend ostream& operator<<(ostream& os, const Rational<K>& r);
};

template<typename T>
ostream& operator<<(ostream& os, const Rational<T>& r)
{
    os << r.n;
    if(r.d != 1) os << '/' << r.d;
    return os;
}


typedef long long int INT;
typedef Rational<INT> RAT;



int main() {
  ios::sync_with_stdio(false);

  INT A, B, C, x1, x2, y1, y2;
  cin >> A >> B >> C >> x1 >> x2 >> y1 >> y2;

  if(x2 < x1) swap(x1, x2);
  if(y2 < y1) swap(y2, y1);

  if(ABS(A) > ABS(B)) {
    swap(A,B);
    swap(x1,y1);
    swap(x2,y2);
  }


  INT result;

  if(A == 0 && B == 0 && C == 0) {
    result = (x2-x1 + 1) * (y2 - y1 + 1);
  } else if(A == 0 && B == 0 && C != 0) {
    result = 0;
  } else {
    C = -C;   // Ax+By = C

    INT gcdAB = GCD(A, B);
    if (C % gcdAB != 0) {
      result = 0;
    } else {
      A /= gcdAB;
      B /= gcdAB;
      C /= gcdAB;
      cout << A <<"x + " << B << " y + "<<C << " = 0"<< endl;


    }
  }


  cout << result;

  return 0;
}
