#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>
#include <set>


using namespace std;



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m, s, e;
  cin >> n >> m >> s >> e;

  vector< vector<int> > neighbours(n+1);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    neighbours[a].push_back(b);
    neighbours[b].push_back(a);
  }

  const int INF = 1000000000;

  vector<int> d(n+1, INF);
  d[s] = 0;
  vector<bool> visited(n+1);
  vector<int> p(n+1);

  set< pair<int, int> > q;      // (d, v)
  q.insert(make_pair(0, s));

  while (q.size()) {
    set< pair<int, int> >::iterator it = q.begin();
    int cost = it->first, v = it->second;
    q.erase(it);

    visited[v] = true;

    vector<int> &ns = neighbours[v];
    for (int j = 0; j < ns.size(); j++) {
      int to = ns[j];
      if (!visited[to]) {
        if (d[v] + 1 < d[to]) {
          if (d[to] != INF) {
            q.erase(make_pair(d[to], to));
          }
          d[to] = d[v] + 1;
          p[to] = v;
          q.insert(make_pair(d[to], to));
        }
      }
    }
  }

  if (d[e] == INF) {
    cout << "-1\n";
    return 0;
  }

  cout << d[e] << '\n';

  deque<int> path;
  int i = e;
  path.push_front(i);

  while (i != s) {
    path.push_front((i = p[i]));
  }

  for (int i = 0; i < path.size(); i++) cout << path[i] << ' ';
  cout << '\n';


  return 0;
}
