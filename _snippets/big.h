#include <deque>
#include <string>
#include <algorithm>
#include <functional>
#include <iostream>


namespace big {

class DecInt {
public:
  DecInt();
  DecInt(const std::string&);
  DecInt(int v);
  DecInt(const DecInt& other);

  static DecInt ZERO;
  static DecInt ONE;

  unsigned int    digits_count()  const   { return _ds.size();                 }
  bool            is_zero()       const   { return digits_count() == 0;        }
  bool            is_negative()   const   { return _is_negative && !is_zero(); }
  bool            is_positive()   const   { return !_is_negative && !is_zero();}
  std::string     to_str()        const;
  operator        std::string()   const   { return to_str();                   }
  operator        bool()          const   { return !is_zero();                 }

  DecInt& operator=(const DecInt& other);
  friend bool operator==(const DecInt& a, const DecInt& b);
  friend bool operator<(const DecInt& a, const DecInt& b);


private:
  std::deque<char>    _ds;           //digits
  bool                _is_negative;
};

DecInt DecInt::ZERO = DecInt(0);
DecInt DecInt::ONE = DecInt(1);

char _to_letter(char c) { return c + '0'; }

char _from_letter(char c) {
  if(!('0' <= c && c <= '9')) throw std::invalid_argument("unknown character");
  return c - '0';
}

DecInt::DecInt() : _is_negative(false) {}

DecInt::DecInt(const std::string& v) : _is_negative(false) {
  std::string::const_iterator i = v.begin();
  if(i == v.end()) { throw std::invalid_argument("big::DecInt: zero size"); }

  if     (*i == '-') { _is_negative = true;  ++i; }
  else if(*i == '+') { _is_negative = false; ++i; }
  else if(!('0' <= *i && *i <= '9')) throw std::invalid_argument("unknown character");

  for( ; i != v.end() && *i == '0'; ++i);

  _ds = std::deque<char>();
  std::transform(i, v.end(), std::front_inserter(_ds), _from_letter);
}

DecInt::DecInt(int v): _is_negative(false) {
  if(v < 0) { v = -v; _is_negative = true; }
  while(v != 0) {
    _ds.push_back(v%10);
    v /= 10;
  }
}

DecInt::DecInt(const DecInt& other) : _ds(other._ds), _is_negative(other._is_negative)
{}


std::string DecInt::to_str() const {
  if(is_zero()) return "0";
  std::string result;
  if(_is_negative) result = "-";
  std::transform(_ds.rbegin(), _ds.rend(), std::back_inserter(result), _to_letter);
  return result;
}

DecInt& DecInt::operator=(const DecInt& other) {
  _ds = other._ds;
  _is_negative = other._is_negative;
  return *this;
}

inline bool operator==(const DecInt& a, const DecInt& b) {
  return (a._is_negative == b._is_negative) && (a._ds == b._ds);
}
inline bool operator<(const DecInt& a, const DecInt& b) {
  if(a._is_negative != b._is_negative) return a._is_negative;
  if     (a.digits_count() < b.digits_count())  return !a._is_negative;
  else if(a.digits_count() > b.digits_count())  return a._is_negative;
  else return !a._is_negative ? (a._ds < b._ds) : (a._ds > b._ds);
}
inline bool operator!=(const DecInt& a, const DecInt& b) {
  return !(a == b);
}
inline bool operator>(const DecInt& a, const DecInt& b) {
  return b < a;
}
inline bool operator<=(const DecInt& a, const DecInt& b) {
  return !(b < a);
}
inline bool operator>=(const DecInt& a, const DecInt& b) {
  return !(a < b);
}



} //namespace big
