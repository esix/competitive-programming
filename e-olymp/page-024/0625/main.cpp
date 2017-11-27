#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <deque>


using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m, s, f;
  cin >> n >> m >> s >> f;

  vector<int> cost(n+1, -1);
  vector<int> prev(n+1, -1);
  vector<bool> visited(n+1);
  vector< vector< pair<int, int> > > neighbours(n+1);
  
  for (int i = 0; i < m; i++) {
    int b, e, w;
    cin >> b >> e >> w;
    neighbours[b].push_back(make_pair(w, e));
    neighbours[e].push_back(make_pair(w, b));
  }

  set< pair<int, int> > q;
  q.insert(make_pair(0, s));
  cost[s] = 0;

  while (!q.empty() && !visited[f]) {
    pair<int, int> p = *q.begin();
    q.erase(q.begin());

    int a = p.second;
    visited[a] = true;

    vector< pair<int, int> > &ns = neighbours[a];

    for (vector< pair<int, int> >::iterator it = ns.begin(); it != ns.end(); ++it) {
      int w = it->first;
      int b = it->second;

      if (visited[b]) continue;

      if (cost[b] == -1) {          // insert new
        cost[b] = cost[a] + w;
        prev[b] = a;
        q.insert(make_pair(cost[b], b));
      } else if (cost[b] > cost[a] + w) {   // better way
        set< pair<int, int> >::iterator it = q.find(make_pair(cost[b], b));
        q.erase(it);
        cost[b] = cost[a] + w;
        prev[b] = a;
        q.insert(make_pair(cost[b], b));
      }
    }
  }

  cout << cost[f] << endl;

  if (cost[f] != -1) {

    deque<int> path;
    int i = f;
    while (i != -1) {
      path.push_front(i);
      i = prev[i];
    } 
    for (int i = 0; i < path.size(); i++) {
      cout << path[i] << ' ';
    }
    cout << '\n';
  }

  return 0;
}
