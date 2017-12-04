#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector< vector<int> > neighbours(n);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    neighbours[a].push_back(b);
    neighbours[b].push_back(a);
  }

  vector<bool> visited(n);
  queue< pair<int, int> > q;

  pair<int, int> result = make_pair(1, 0);

  int k;
  cin >> k;
  for (int i = 0; i < k; i++) {
    int s;
    cin >> s;
    s--;
    pair<int, int> item = make_pair(0, s);
    q.push(item);
    visited[s] = true;
    if (item < result) result = item;
  }
  

  while (!q.empty()) {
    pair<int, int> item = q.front();
    q.pop();
    int v = item.second, cost = item.first;

    if (item < result) result = item;

    vector<int> &ns = neighbours[v];
    for (int i = 0; i < ns.size(); i++) {
      int w = ns[i];
      if (!visited[w]) {
        visited[w] = true;
        q.push(make_pair(cost - 1, w));
      }
    }
  }

  cout <<  -result.first << '\n' << 1 + result.second << '\n';
  return 0;
}
