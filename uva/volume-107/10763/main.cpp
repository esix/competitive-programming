#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int n;
    cin >> n;
    
    if (n == 0) {
      break;
    }

    multiset< pair<int, int> > s;

    for (int i = 0; i < n; i++) {
      int from, to;
      cin >> from >> to;
      multiset< pair<int, int> >::iterator it = s.find(make_pair(to, from));
      if (it == s.end()) {
        s.insert(make_pair(from, to));
      } else {
        s.erase(it);
      }
    }

    if (s.size() == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  

  return 0;
}
