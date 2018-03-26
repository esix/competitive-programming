#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>

using namespace std;

vector< set<int> > g_vs;
vector<bool> visited;

bool is_adjacent(int x, int y)  {
  return g_vs[x].find(y) != g_vs[x].end();
}

bool count_adjacents(int x, int y) {
  int r = 0;
  set<int> &X = g_vs[x];
  for (set<int>::iterator it = X.begin(); it != X.end(); ++it) {
    if (is_adjacent(y, *it)) {
      r++;
    }
  }
  return is_adjacent(x, y) ? r == 0 : r <= 1;
}


bool check_rabbit(int from) {
  visited[from] = true;

  vector<int> ds;

  stack<int> s;
  s.push(from);

  while (!s.empty())  {
    int x = s.top();
    s.pop();

    set<int> &X = g_vs[x];
    if (X.size() == 3) {
      ds.push_back(x);
    }

    for (set<int>::iterator it = X.begin(); it != X.end(); ++it) {
      int y = *it;
      if (!visited[y]) {
        visited[y] = true;
        s.push(y);
      }
    }
  }

  if (ds.size() >= 5) {
    return true;
  }

  for (int x = 0; x < ds.size(); x++) {
    for (int y = x + 1; y < ds.size(); y++) {
      if (count_adjacents(ds[x], ds[y])) {
        return true;
      }
    }
  }

  return false;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  while (cin >> n >> m) {

    {   // incomplete
      vector< set<int> > vs(n);

      bool result = false;

      for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--;               // zero based
        vs[x].insert(y);
        vs[y].insert(x);
        if (vs[x].size() >= 4) result = true;
        if (vs[y].size() >= 4) result = true;
      }

      if (result) {
        cout << "YES\n";
        continue;
      }

      swap(vs, g_vs);
    }

    // search for more complex connection
    visited.resize(n);
    fill(visited.begin(), visited.end(), false);

    bool result = false;
    for (int i = 0; i < n; i++) {
      if (visited[i]) continue; 
      if (g_vs[i].size() < 3) continue;
      // 3+ intersection
      if (check_rabbit(i)) {
        result = true;
        break;
      }
    }

    if (result) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
