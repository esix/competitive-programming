#include <iostream>
#include <locale>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;

struct colon_is_space : std::ctype<char> {
  colon_is_space() : std::ctype<char>(get_table()) {}
  static mask const* get_table()
  {
    static mask rc[table_size];
    rc[':'] = std::ctype_base::space;
    rc[' '] = std::ctype_base::space;
    rc['\n'] = std::ctype_base::space;
    return &rc[0];
  }
};

int main() {
 cin.tie(0);
 ios::sync_with_stdio(false);

  cin.imbue(locale(cin.getloc(), new colon_is_space));


  int h1, m1, s1;
  int h2, m2, s2;

  cin >> h1 >> m1 >> s1;
  cin >> h2 >> m2 >> s2;

  int t1 = h1 * 3600 + m1 * 60 + s1;
  int t2 = h2 * 3600 + m2 * 60 + s2;

  if (t1 >= t2) t2 += 24 * 3600;

  int s =  t2 - t1;

  int m = s / 60;
  s %= 60;
  int h = m / 60;
  m %= 60;

  cout << setfill('0') << setw(2) << h << ':' << setw(2) << m << ':' << setw(2) <<  s << '\n';

  return 0;
}
