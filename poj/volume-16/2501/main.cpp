#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  double speed=0, now = 0, dist = 0;
  while (getline(cin, s)) {
    if (!s.length()) continue;
    double time = ((s[0]-'0')*10+s[1]-'0')*3600+((s[3]-'0')*10+s[4]-'0')*60+(s[6]-'0')*10+s[7]-'0';
    if (s.length() > 9) {
      double new_speed = atof(s.substr(9).c_str());
      dist += speed * (time - now) / 3600;
      now = time;
      speed = new_speed;
    } else {
      cout << s << ' ' << fixed << setprecision(2) << dist + speed * (time - now) / 3600 << " km\n";
    }
  }
  return 0;
}
