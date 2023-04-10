#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

class Card {
public:
  Card() : _value(1), _suit('C') {}
  Card(int value, char suit) : _value((value - 1) % 13 + 1), _suit(suit) {}

  friend istream& operator>>(istream& in, Card& card);
  friend ostream& operator<<(ostream& os, const Card& card);

  int value() const {  return _value; }
  int suit() const {  return _suit; }

  bool operator<(const Card& c) const {
    return _value != c._value ? _value < c._value : _suit < c._suit;
  }

  bool operator==(const Card& c) const {
    return _value == c._value && _suit == c._suit;
  }

private:
  int _value;
  char _suit;
};

istream& operator>>(istream& in, Card& card) {
  string s;
  in >> s;
  if (s[0] == 'A') card._value = 1;
  else if (s[0] == '1') card._value = 10;
  else if (s[0] == 'J') card._value = 11;
  else if (s[0] == 'Q') card._value = 12;
  else if (s[0] == 'K') card._value = 13;
  else card._value = s[0] - '0';
  card._suit = s[s.length() - 1];
  return in;
}

ostream& operator<<(ostream& os, const Card& card) {
  if (card._value == 1) os << 'A';
  else if (card._value == 11) os << 'J';
  else if (card._value == 12) os << 'Q';
  else if (card._value == 13) os << 'K';
  else os << card._value;
  os << card._suit;
  return os;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    vector<Card> c(5);
    cin >> c[0] >> c[1] >> c[2] >> c[3] >> c[4];
    sort(c.begin(), c.end());
    do {
      int value = c[1].value();
      char suit = c[1].suit();

      int pos = 1;
      if (c[3] < c[2] && c[3] < c[4]) pos = 2;
      else if (c[4] < c[2] && c[4] < c[3]) pos = 3;

      value += pos;

      if (pos == 1 && c[4] < c[3] ||
          pos == 2 && c[4] < c[2] ||
          pos == 3 && c[3] < c[2]) value += 3;

      Card missing(value, suit);

      if (missing == c[0]) {
        cout << "Problem "<< t << ": " << c[0] << ' ' << c[1] << ' ' << c[2] << ' ' << c[3] << ' ' << c[4] << endl;
        break;
      }

    } while (next_permutation(c.begin(), c.end()));
  }

  return 0;
}
