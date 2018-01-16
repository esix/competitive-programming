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

  int n, m, s;
  cin >> n >> m >> s;

  vector< vector<int> > neighbours(n+1);

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    if (a != b) {
      neighbours[b].push_back(a);   // reverse all edges as searching dist to s (not from)
    }
  }

  const int INF = 1000000000;

  vector<int> d(n+1, INF);
  d[s] = 0;
  vector<bool> visited(n+1);

  while (true) {

    int v = -1;
    for (int j = 1; j <= n; j++) {
      if (!visited[j] && (v == -1 || d[j] < d[v])) {
        v = j;
      }
    }

    if (v == -1) break;

    visited[v] = true;

    vector<int> &ns = neighbours[v];
    for (int j = 0; j < ns.size(); j++) {
      int to = ns[j];
      d[to] = min(d[to], d[v] + 1);
    }
  }

  int result = 0;
  for (int i = 1; i <= n; i++) {
    if (d[i] != INF) {
      result = max(result, d[i]);
    }
    // cout << "Dist to " << i << " = " << d[i] << endl;
  }
  cout << result << '\n';
  return 0;
}
