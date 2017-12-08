#include <iostream>
#include <iomanip>
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

  int n, m;
  cin >> n >> m;

  vector< vector< pair<int, int> > > neighbours(n+1);

  for (int j = 0; j < m; j++) {
    int u, v, w;
    cin >> u >> v >> w;
    switch(w) {
      case 1: w = 12; break;
      case 2: w = 6; break;
      case 3: w = 4; break;
      case 4: w = 3; break;
    }
    v--; u--;
    neighbours[u].push_back(make_pair(v, w));
    neighbours[v].push_back(make_pair(u, w));
  }

  const int INF = 1000000000;

  vector<int> d(n, INF);
  d[0] = 0;
  vector<bool> visited(n);

  set< pair<int, int> > q;
  q.insert(make_pair(0, 0));

  while (true) {

    set< pair<int, int> >::iterator it = q.begin();
    if (it == q.end()) break;
    int v_value = it->first, v = it->second;
    q.erase(it);

    visited[v] = true;

    vector<pair<int, int> > &ns = neighbours[v];

    for (vector<pair<int, int> >::iterator jt = ns.begin(); jt != ns.end(); ++jt) {
      int u = jt->first, edge_cost = jt->second;
      int u_value = d[u];
      int possible_value = v_value + edge_cost;

      if (possible_value < u_value) {
        set< pair<int, int> >::iterator it = q.find(make_pair(u_value, u));
        if (it != q.end()) q.erase(it);

        q.insert(make_pair(possible_value, u));
        d[u] = possible_value;
      }
    }
  }

  cout << std::setprecision(8) << fixed;

  for (int i = 1; i < n; i++) {
    cout << double(d[i]) / 12.0 << '\n';
  }

  return 0;
}
