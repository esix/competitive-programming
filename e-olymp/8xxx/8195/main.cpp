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

  int m, n;
  cin >> m >> n;

  vector<string> g(m);
  for (int i = 0; i < m; i++) cin >> g[i];

  vector< vector<int> > results(m, vector<int>(n, -1));

  vector< pair<int, int> > next;
  next.push_back(make_pair(0, 0));
  results[0][0] = 0;

  for(int step = 1; !next.empty(); step++) {

    vector< pair<int, int> > new_next;

    for (int i = 0; i < next.size(); i++) {
      int y = next[i].first, x = next[i].second;

      int d = g[y][x] - '0';
      if (y - d >=0 && results[y-d][x] == -1) { results[y-d][x] = step; new_next.push_back(make_pair(y-d, x)); }
      if (y + d < m && results[y+d][x] == -1) { results[y+d][x] = step; new_next.push_back(make_pair(y+d, x)); }
      if (x - d >=0 && results[y][x-d] == -1) { results[y][x-d] = step; new_next.push_back(make_pair(y, x-d)); }
      if (x + d < n && results[y][x+d] == -1) { results[y][x+d] = step; new_next.push_back(make_pair(y, x+d)); }
    }

    next = new_next;
  }

  if (results[m-1][n-1] == -1) {
    cout << "IMPOSSIBLE\n";
  } else {
    cout << results[m-1][n-1] << '\n';
  }

  return 0;
}
