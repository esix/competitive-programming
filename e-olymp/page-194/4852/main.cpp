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

  int n, x;
  cin >> n >> x;

  vector< vector<int> > g(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> g[i][j];
    }
  }

  const int INF = 1000000000;

  vector<int> d(n, INF);
  d[x-1] = 0;
  vector<bool> visited(n);

  while (true) {

    int v = -1;
    for (int j = 0; j < n; j++) {
      if (!visited[j] && (v == -1 || d[j] < d[v])) {
        v = j;
      }
    }

    if (v == -1) break;

    visited[v] = true;

    for (int j = 0; j < n; j++) {
      if (g[v][j]) {
        d[j] = min(d[j], d[v] + 1);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (d[i] != INF) {
      cout << d[i];
    } else {
      cout << -1;
    }
    cout << ' ';
  }
  cout << '\n';

  return 0;
}
