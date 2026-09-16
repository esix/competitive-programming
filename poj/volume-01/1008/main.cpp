#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <iomanip>


using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int tests;
  cin >> tests;

  const vector<string> h_months = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac",
                                   "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
  const vector<string> t_months = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok",
                                   "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};

  cout << tests << '\n';

  for (int i = 0; i < tests; i++) {
    int d, y;
    char dot;
    string m_name;
    cin >> d >> dot >> m_name >> y;

    int m = distance(h_months.begin(), find(h_months.begin(), h_months.end(), m_name));
    int the_real_day = y * 365 + m * 20 + d;
    int t_year = the_real_day / 260;
    int day = the_real_day % 260;
    const string tm_name = t_months[day % 20];
    day = day % 13 + 1;
    cout << day << ' ' << tm_name << ' ' << t_year << '\n';
  }

  return 0;
}
