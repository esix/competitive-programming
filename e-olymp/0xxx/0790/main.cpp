#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  set< pair<int, int> > s;

  while(true) {
    int cmd;
    cin >> cmd;
    if (cmd == 0) {
      break;
    }
    if (cmd == 1) {
      int k, p;
      cin >> k >> p;
      s.insert(make_pair(p, k));
    } else if (cmd == 2) {
      int r = 0;
      if (s.empty()) {
        r = 0;
      } else {
        set< pair<int, int> >::iterator it = s.end();
        --it;
        r = it->second;
        s.erase(it);
      }
      cout << r << '\n';
    } else if (cmd == 3) {
      int r = 0;
      if (s.empty()) {
        r = 0;
      } else {
        set< pair<int, int> >::iterator it = s.begin();
        r = it->second;
        s.erase(it);
      }
      cout << r << '\n';
    }
  }
  return 0;
}
