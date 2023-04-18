#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <cctype>

using namespace std;

struct Figure {
  char f;
  char x;
  char y;
};



ostream& operator<<(ostream& os, const Figure& f) {
  if (f.f != 'P') os << f.f;
  os << f.x << f.y;
  return os;
}


int getFigureValue(char f) {
  switch (f) {
    case 'K': return 1;
    case 'Q': return 2;
    case 'R': return 3;
    case 'B': return 4;
    case 'N': return 5;
    default: return 6;
  }
}

struct white_comparator {
  inline bool operator() (const Figure& f1, const Figure& f2) {
    if (f1.f != f2.f) return getFigureValue(f1.f) < getFigureValue(f2.f);
    if (f1.y != f2.y) return f1.y < f2.y;
    return f1.x < f2.x;
  }
};

struct black_comparator {
  inline bool operator() (const Figure& f1, const Figure& f2) {
    if (f1.f != f2.f) return getFigureValue(f1.f) < getFigureValue(f2.f);
    if (f1.y != f2.y) return f1.y > f2.y;
    return f1.x < f2.x;
  }
};




int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<Figure> white;
  vector<Figure> black;

  for (char y = '8'; y >= '1'; y--) {
    string s;
    getline(cin, s);
    getline(cin, s);

    for (char x = 'a'; x <= 'h'; x++) {
      char c = s[2 + (x - 'a') * 4];
      if (c == ':' || c == '.') continue;
      if (isupper(c)) {
        white.push_back((Figure){c, x, y});
      } else {
        black.push_back((Figure){toupper(c), x, y});
      }
    }
  }
  std::sort(white.begin(), white.end(), white_comparator());
  std::sort(black.begin(), black.end(), black_comparator());

  cout << "White: ";
  for (vector<Figure>::iterator it = white.begin(); it != white.end(); it++) {
    if (it != white.begin()) cout << ',';
    cout << *it;
  }
  cout << endl;

  cout << "Black: ";
  for (vector<Figure>::iterator it = black.begin(); it != black.end(); it++) {
    if (it != black.begin()) cout << ',';
    cout << *it;
  }
  cout << endl;

  return 0;
}
