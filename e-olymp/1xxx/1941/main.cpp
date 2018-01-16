#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

// first - its index in pre-order walk, second - last index of last child this walk
// every children of i has its index between (first .. second]
vector< pair<int, int> > indices;    

vector< vector<int> > children;
int n;


// Pre-order left tree walk
int  build_indices_helper(int from, int start_index) {
  indices[from].first = start_index;

  const vector<int> &ch = children[from];   // alias for children

  for (int i = 0; i < ch.size(); i++) {
    start_index = build_indices_helper(ch[i], start_index+1);
  }

  indices[from].second = start_index;

  return start_index;
}

void build_indices() {
  build_indices_helper(0, 0);
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  indices.resize(n+1);
  children.resize(n+1);

  for (int i = 1; i <= n; i++) {
    int p;  // p is parent of i
    cin >> p;
    children[p].push_back(i);
  }

  build_indices();

  int m;
  cin >> m;

  vector<char> result(2*m, '\n');     // buffer for fast console out

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    int from = indices[a].first, to = indices[a].second, idx = indices[b].first;

    bool is_child = from < idx && idx <= to;

    result[i * 2] = (is_child ? '1' : '0');
  }

  fwrite(&result[0], 1, 2*m, stdout);

  return 0;
}
