#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int h1, m1, s1;
  int h2, m2, s2;

  cin >> h1 >> m1 >> s1;
  cin >> h2 >> m2 >> s2;

  int s =  (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);
  int m = s / 60;
  s %= 60;
  int h = m / 60;
  m %= 60;

  cout << h << ' ' << m << ' ' << s << '\n';

  return 0;
}
