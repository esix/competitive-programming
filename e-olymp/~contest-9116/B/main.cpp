#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


#define WHITE 0                      // unknown
#define GRAY 1                       // visited this loop
#define BLACK 2                      // proceeded


int n;
vector< vector<int> > g(101, vector<int>(101));
vector<int> color(101);


void print_st() {
  for (int i = 0; i < n; i++) {
    cout << "Node " << (i+1) << ": ";
    if (color[i] == WHITE) cout << "WHITE";
    if (color[i] == GRAY) cout << "GRAY";
    if (color[i] == BLACK) cout << "BLACK";
    cout << endl;
  }
  cout << endl;
}


bool dfs_search_loop(int from, int prev = -1) {
  if (color[from] == BLACK) {
    return false;
  }

  color[from] = GRAY;
  for (int to = 0; to < n; to++) {
    if (!g[from][to]) continue;         // `from`-`to` not linked
    if (to == prev) continue;           // prev node: ignore

    if (color[to] == WHITE) {           // `to` not visited: start dfs from it
      dfs_search_loop(to, from);

    } else if (color[to] == GRAY) {     // `to` visited in this path: found the loop
      // remove 
	  g[from][to] = 0;
      g[to][from] = 0;
    }
  }
  color[from] = BLACK;            
  return false;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int m;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int from, to;
    cin >> from >> to;
    from--; to--;
    g[from][to] = 1;
    g[to][from] = -1;
  }

  for (int i = 0; i < n; i++) {
	  dfs_search_loop(i);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (g[i][j] == 1) {
        cout << (i+1) << ' ' << (j+1) << '\n';
      }
    }
  }

  return 0;
}
