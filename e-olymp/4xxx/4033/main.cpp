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

  int n, a, b;
  cin >> n >> a >> b;

  vector< vector<int> > neighbours(n+1);

  for (int i = 1; i <= n; i++) {
    int k; 
    cin >> k;
    neighbours[i].resize(k);
    for (int j = 0; j < k; j++) {
      cin >> neighbours[i][j];
    }
  }

  const int INF = 1000000000;

  vector<int> d(n+1, INF);
  d[a] = 0;
  vector<bool> visited(n+1);

  set< pair<int, int> > q;
  q.insert(make_pair(0, a));

  while (true) {

    set< pair<int, int> >::iterator it = q.begin();
    if (it == q.end()) break;
    int cost = it->first, v = it->second;
    q.erase(it);

    visited[v] = true;

    vector<int> &ns = neighbours[v];

    for (int j = 0; j < ns.size(); j++) {
      int w = ns[j];
      int w_cost = d[w];
      int possible_cost = cost + (j == 0 ? 0 : 1);
      if (possible_cost < w_cost) {
        set< pair<int, int> >::iterator jt = q.find(make_pair(w_cost, w));
        if (jt != q.end()) q.erase(jt);
        q.insert(make_pair(possible_cost, w));
        d[w] = possible_cost;
      }
    }
  }

  if (d[b] == INF) {
    cout << "-1\n";
  } else {
    cout << d[b] << '\n';
  }

  return 0;
}
