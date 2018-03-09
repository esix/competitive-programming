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

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {

    multiset<int> s;

    int n, m;
    cin >> m >> n;
    
    vector<int> a(m);
    for (int k = 0; k < m; k++) cin >> a[k];

    int j = 0;
    s.insert(2100000000);
    multiset<int>::iterator it = s.begin();

    for (int i = 0; i < n; i++) {
      int u;
      cin >> u;

      while (j < u) {
        s.insert(a[j]);
        if (a[j] < *it) {
          it--;
        }
        j++;
      }
      cout << *it << '\n';
      it++;
    }
    if (t < T-1) cout << '\n';
  }

  return 0;
}
