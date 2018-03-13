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

  int n;
  cin >> n;

  typedef long long INT;
  typedef pair<INT, INT> ITEM;
  typedef set<ITEM> CONTAINER;

  CONTAINER s;
  for (int i = 1; i <= n; i++) {
    INT v;
    cin >> v;
    s.insert(make_pair(v, i));
  }

  while (s.size() > 1) {
    ITEM v1 = *s.begin(); s.erase(s.begin());
    ITEM v2 = *s.begin(); s.erase(s.begin());
    cout << min(v1.second, v2.second) << ' ' << max(v1.second, v2.second) << '\n';
    s.insert(make_pair<INT, INT>((v1.first + v2.first) >> 1, ++n));
  }


  return 0;
}