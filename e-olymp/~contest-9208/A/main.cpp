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

  int n, s, f;
  cin >>n >> s >> f;
  s--; f--;

  vector< vector<int> > g(n, vector<int>(n));
  for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> g[i][j];

  vector<bool> visited(n);
  queue< pair<int, int> > q;
  q.push(make_pair(s, 0));
  visited[s] = true;

  while (!q.empty()) {
    pair<int, int> pp = q.front();
    q.pop();
    int v = pp.first, cost = pp.second;

    if (v == f) {
      cout << cost << endl;
      return 0;
    }

    for (int i = 0; i < n; i++) {
      if (g[v][i] && !visited[i]) {
        visited[i] = true;
        q.push(make_pair(i, cost + 1));
      }
    }
  }

  cout << 0 << endl;

  return 0;
}
