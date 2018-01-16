#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int n;
vector<string> g;           // matrix
vector<int> colors;         // for each node - its group (=linked external wire)

int m;
vector<int> externals;      // external wire nodes
vector<int> colors_count;   // external wire group (nodes count)


int current_edges_count() {
  int result = 0;
  for(int i = 0; i < n-1; i++) {
    for(int j = i+1; j < n; j++) {
      if (g[i][j] == '1') result++;
    }
  }
  return result;
}

// dfs to find groups and colorify them
void colorify_(int node, int color) {
  colors[node] = color;
  colors_count[color] ++;
  for (int i = 0; i < n; i++) {
    if (g[node][i] == '1' && colors[i] == -1) {
      colorify_(i, color);
    }
  }
}

// start coloring each group from wxternal wire
void colorify() {
  for (int i = 0; i < m; i++) {
    colorify_(externals[i], i);
  }
}


int solve() {
  colors = vector<int>(n, -1);
  colors_count = vector<int>(m, 0);

  int current_edges = current_edges_count();

  colorify();
  int max_color_index = 0;

  // find group with max nodes
  for(int i = 1; i < m; i++) {
    if (colors_count[max_color_index] < colors_count[i]) {
      max_color_index = i;
    }
  }

  // add all uncolored nodes to group with max nodes
  for(int i = 0; i < n; i++) {
    if (colors[i] == -1) {
      colors[i] = max_color_index;
      colors_count[max_color_index]++;
    }
  }

  // for each group count its edges count (full graph)
  int new_edges = 0;
  for (int i = 0; i < m; i++) {
    int z = colors_count[i];
    new_edges += z * (z-1) / 2;
  }

  return new_edges - current_edges;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(cin >> n) {
    g.resize(n);
    for (int i = 0; i < n; i++) {
      cin >> g[i];
    }
    cin >> m;
    externals.resize(m);
    for (int i = 0; i < m; i++) {
      cin >> externals[i];
    }
    cout << solve() << '\n';
  }

  return 0;
}
