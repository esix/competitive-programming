#include <deque>
#include <string>
#include <algorithm>
#include <functional>
#include <iostream>


namespace big {

class Decimal {
public:
  typedef std::deque<char> _collection_t;

  Decimal();
  Decimal(const std::string&);
  Decimal(const char*);
  Decimal(int v);
  Decimal(const Decimal&);

  static Decimal ZERO;
  static Decimal ONE;

  unsigned int    digits_count()  const   { return _ds.size();                 }
  bool            is_zero()       const   { return digits_count() == 0;        }
  bool            is_negative()   const   { return _is_negative && !is_zero(); }
  bool            is_positive()   const   { return !_is_negative && !is_zero();}
  char            sign()          const   { return is_zero() ? 0 : (is_negative() ? -1 : 1); }
  std::string     to_str()        const;
  operator        std::string()   const   { return to_str();                   }
  operator        bool()          const   { return !is_zero();                 }

  Decimal&    operator=  (const Decimal&);
  Decimal&    operator=  (const std::string&);
  Decimal&    operator=  (int);
  friend bool operator== (const Decimal&, const Decimal&);
  friend bool operator<  (const Decimal&, const Decimal&);
  friend bool operator!= (const Decimal&, const Decimal&);
  friend bool operator>  (const Decimal&, const Decimal&);
  friend bool operator<= (const Decimal&, const Decimal&);
  friend bool operator>= (const Decimal&, const Decimal&);

  friend const Decimal& operator+  (const Decimal&);                            // +v
  friend const Decimal  operator-  (const Decimal&);                            // -v
  friend const Decimal& operator++ (Decimal&);                                  // ++v
  friend const Decimal  operator++ (Decimal&, int);                             // v++
  friend const Decimal& operator-- (Decimal&);                                  // --v
  friend const Decimal  operator-- (Decimal& i, int);                           // v--
  friend const Decimal  operator+  (const Decimal&, const Decimal&);
  friend const Decimal  operator-  (const Decimal&, const Decimal&);
  friend Decimal&       operator+= (Decimal&, const Decimal&);
  friend Decimal&       operator-= (Decimal&, const Decimal&);
  friend Decimal&       operator+= (Decimal&, int);
  friend Decimal&       operator-= (Decimal&, int);

private:
  _collection_t       _ds;           //digits
  bool                _is_negative;

  Decimal(const _collection_t&, bool);
  Decimal& _add(int);
  Decimal& _add(const Decimal& r, bool minus=false);
};

Decimal Decimal::ZERO = Decimal(0);
Decimal Decimal::ONE = Decimal(1);

inline char _to_letter  (char c) { return c + '0'; }
inline char _from_letter(char c) { if(!('0' <= c && c <= '9')) throw std::invalid_argument("unknown character");  return c - '0'; }

Decimal::Decimal() : _is_negative(false) {}
Decimal::Decimal(const std::string& v)   { *this = v;              }
Decimal::Decimal(const char* v)          { *this = std::string(v); }
Decimal::Decimal(int v)                  { *this = v;              }
Decimal::Decimal(const Decimal& other) : _ds(other._ds), _is_negative(other._is_negative) {}
Decimal::Decimal(const _collection_t& ds, bool is_negative) : _ds(ds), _is_negative(is_negative) {}

std::string Decimal::to_str() const {
  if(is_zero()) return "0";
  std::string result;
  if(_is_negative) result = "-";
  std::transform(_ds.rbegin(), _ds.rend(), std::back_inserter(result), _to_letter);
  return result;
}

Decimal& Decimal::operator=(const Decimal& other) {
  _ds = other._ds;
  _is_negative = other._is_negative;
  return *this;
}
Decimal& Decimal::operator=(const std::string& v) {
  _is_negative = false;
  _ds.clear();
  std::string::const_iterator i = v.begin();
  if(i == v.end()) { throw std::invalid_argument("big::Decimal: zero size"); }

  if     (*i == '-') { _is_negative = true;  ++i; }
  else if(*i == '+') { _is_negative = false; ++i; }

  for( ; i != v.end() && *i == '0'; ++i);

  std::transform(i, v.end(), std::front_inserter(_ds), _from_letter);
  return *this;
}
Decimal& Decimal::operator=(int v) {
  _is_negative = false;
  _ds.clear();
  if(v < 0) { v = -v; _is_negative = true; }
  while(v != 0) {
    _ds.push_back(v%10);
    v /= 10;
  }
  return *this;
}


inline bool operator==(const Decimal& a, const Decimal& b) {
  return (a.sign() == b.sign()) && (a._ds == b._ds);
}
inline bool operator<(const Decimal& a, const Decimal& b) {
  if(a._is_negative != b._is_negative) return a._is_negative;
  if     (a.digits_count() < b.digits_count())  return !a._is_negative;
  else if(a.digits_count() > b.digits_count())  return a._is_negative;
  else return !a._is_negative ? (a._ds < b._ds) : (a._ds > b._ds);
}
inline bool operator!=(const Decimal& a, const Decimal& b) { return !(a == b); }
inline bool operator> (const Decimal& a, const Decimal& b) { return b < a;     }
inline bool operator<=(const Decimal& a, const Decimal& b) { return !(b < a);  }
inline bool operator>=(const Decimal& a, const Decimal& b) { return !(a < b);  }

inline const Decimal& operator+  (const Decimal& v) { return v;                               }    // +v
inline const Decimal  operator-  (const Decimal& v) { return Decimal(v._ds, !v._is_negative); }    // -v
inline const Decimal& operator++ (Decimal& v)       { return v._add(1);                       }    // ++v
inline const Decimal& operator-- (Decimal& v)       { return v._add(-1);                      }    // --v
inline const Decimal  operator++ (Decimal& v, int)  { Decimal tmp(v); v._add(1);  return tmp; }    // v++
inline const Decimal  operator-- (Decimal& v, int)  { Decimal tmp(v); v._add(-1); return tmp; }    // v--

inline const Decimal  operator+  (const Decimal& l, const Decimal& r) { Decimal tmp(l); return tmp._add(r, false); }
inline const Decimal  operator-  (const Decimal& l, const Decimal& r) { Decimal tmp(l); return tmp._add(r, true ); }
inline Decimal&       operator-= (Decimal&       l, const Decimal& r) { return l._add(r, false); }
inline Decimal&       operator+= (Decimal&       l, const Decimal& r) { return l._add(r, true ); }
inline Decimal&       operator+= (Decimal&       l, int            r) { return l._add( r);       }
inline Decimal&       operator-= (Decimal&       l, int            r) { return l._add(-r);       }

Decimal& Decimal::_add(int v) {
  // TODO: optimize
  _add(Decimal(v));
  return *this;
}



Decimal& Decimal::_add(const Decimal& r, bool minus) {
  struct _DecimalAdder {
    char carry;
  };
  std::cout << to_str() << (minus ? " - " : " + ") << r.to_str();


  char l_sgn = sign(), r_sgn = !minus ? r.sign() : -r.sign();
  _collection_t::iterator lit = _ds.begin();
  _collection_t::const_iterator rit = r._ds.cbegin();

  char carry = 0;
  _collection_t res;
  int num_zeros = 0;

  while(lit != _ds.end() || rit != r._ds.cend()) {
    char lc = (lit != _ds.end()) ? *lit : 0;
    char rc = (rit != r._ds.cend()) ? *rit : 0;
    char new_c = l_sgn * lc + r_sgn * rc + carry;
    if     (new_c < 0) { new_c += 10; carry = -1; }
    else if(new_c > 9) { new_c -= 10; carry =  1; }

    if(new_c == 0) {
      num_zeros++;
    } else {
      while(num_zeros) { res.push_back(0); num_zeros--; }
      res.push_back(new_c);
    }

    if(lit != _ds.end()) ++lit;
    if(rit != r._ds.cend()) ++rit;
  }
  if(carry == 1) {
    while(num_zeros) { res.push_back(0); num_zeros--; }
    res.push_back(1);
  }
  else if(carry == -1) _is_negative = !_is_negative;

  std::swap(_ds, res);
  std::cout << " = " << to_str() << " [" << (_is_negative ? '-' : '+');
  for(_collection_t::iterator it = _ds.begin(); it != _ds.end(); it++) std::cout << " " << char('0' + *it);
  std::cout << "]\n";

  return *this;
}



} //namespace big
