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

int n, m;

bool is_valid(int i, int j){
  return 0 <= i && i <= n && 0 <= j && j <= m;
}

vector<string> level(n);

char lvl(int i, int j) {
  return 0 <= i && i < n && 0 <= j && j < m ? level[i][j] : 'x';
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  if ((m + n) % 2 != 0) {
    cout << "NO SOLUTION\n";
    return 0;
  }

  level.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> level[i];
  }

  const int INF = 1000000000;

  vector< vector<int> > d(n+1, vector<int>(m+1, INF));
  d[0][0] = 0;
  vector< vector<bool> > visited(n+1, vector<bool>(m+1));

  set< pair<int, pair<int, int> > > q;
  q.insert(make_pair(0, make_pair(0, 0)));

  while (true) {
    set< pair<int, pair<int, int> > >::iterator it = q.begin();
    if (it == q.end()) break;
    int c = it->first;
    int vi = it->second.first;
    int vj = it->second.second;
    q.erase(it);

    visited[vi][vj] = true;

    int i, j;
    char l;
    i = vi - 1; j = vj - 1; l = lvl(i, j); 
    if (is_valid(i, j) && d[i][j] > c + (l == '\\' ? 0 : 1)) {
      set< pair<int, pair<int, int> > >::iterator it = q.find(make_pair(d[i][j], make_pair(i, j)));
      if (it != q.end()) q.erase(it);

      d[i][j] = c + (l == '\\' ? 0 : 1);
      q.insert(make_pair(d[i][j], make_pair(i, j)));
    }

    i = vi + 1; j = vj - 1; l = lvl(i-1, j); 
    if (is_valid(i, j) && d[i][j] > c + (l == '/' ? 0 : 1)) {
      set< pair<int, pair<int, int> > >::iterator it = q.find(make_pair(d[i][j], make_pair(i, j)));
      if (it != q.end()) q.erase(it);

      d[i][j] = c + (l == '/' ? 0 : 1);
      q.insert(make_pair(d[i][j], make_pair(i, j)));
    }

    i = vi - 1; j = vj + 1; l = lvl(i, j-1); 
    if (is_valid(i, j) && d[i][j] > c + (l == '/' ? 0 : 1)) {
      set< pair<int, pair<int, int> > >::iterator it = q.find(make_pair(d[i][j], make_pair(i, j)));
      if (it != q.end()) q.erase(it);

      d[i][j] = c + (l == '/' ? 0 : 1);
      q.insert(make_pair(d[i][j], make_pair(i, j)));
    }

    i = vi + 1; j = vj + 1; l = lvl(vi, vj); 
    if (is_valid(i, j) && d[i][j] > c + (l == '\\' ? 0 : 1)) {
      set< pair<int, pair<int, int> > >::iterator it = q.find(make_pair(d[i][j], make_pair(i, j)));
      if (it != q.end()) q.erase(it);

      d[i][j] = c + (l == '\\' ? 0 : 1);
      q.insert(make_pair(d[i][j], make_pair(i, j)));
    }
  }

  cout << d[n][m] << endl;

  return 0;
}
