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

  static DecInt ZERO;
  static DecInt ONE;

  unsigned int digits_count() const;
  bool         is_zero() const;
  std::string  to_str() const;
  operator     std::string() const { return to_str(); }


private:
  std::deque<char> ds; //digits
  bool is_negative;
};

DecInt DecInt::ZERO = DecInt(0);
DecInt DecInt::ONE = DecInt(1);

char _to_letter(char c) { return c + '0'; }
char _from_letter(char c) {
  if(!('0' <= c && c <= '9')) throw std::invalid_argument("unknown character");
  return c - '0';
}

DecInt::DecInt(): is_negative(false) {}
DecInt::DecInt(const std::string& v): is_negative(false) {
  std::string::const_iterator i = v.begin();
  if(i == v.end()) { throw std::invalid_argument("big::DecInt: zero size"); }

  if(*i == '-')  { is_negative = true; ++i; }
  else if(*i == '+') {is_negative = false; ++i; }
  else if(!('0' <= *i && *i <= '9')) throw std::invalid_argument("unknown character");

  for(;i != v.end() && *i == '0'; ++i);

  ds = std::deque<char>();
  std::transform(i, v.end(), std::front_inserter(ds), _from_letter);
}
DecInt::DecInt(int v): is_negative(false) {
  if(v < 0) { v = -v; is_negative = true; }
  while(v != 0) {
    ds.push_back(v%10);
    v /= 10;
  }
}
unsigned int DecInt::digits_count() const { return ds.size(); }
bool DecInt::is_zero() const{ return digits_count() == 0; }

std::string  DecInt::to_str() const {
  if(is_zero()) return "0";
  std::string result;
  if(is_negative) {
    result = "-";
  }
  std::transform(ds.rbegin(), ds.rend(), std::back_inserter(result), _to_letter);
  return result;
}

}
