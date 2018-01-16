#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <numeric>


using namespace std;

int n, m;
vector<int> p;
vector<int> colors;
vector<int> sorted_idx;
int result = 0;

bool cmp(int i, int j) { return p[i] < p[j]; }


void recolor(int old_color, int new_color) {
  for (int i = 0; i < n; i++) {
    if (colors[i] == old_color) {
      colors[i] = new_color;
    }
  }
}


void join_nodes(int a, int b, bool count_sum = false) {
  if (colors[a] == colors[b]) return;
  recolor(colors[b], colors[a]);
  if (count_sum) {
    result += p[a] + p[b];
  }
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  p.resize(n);
  for (int i = 0; i < n; i++) cin >> p[i];

  colors.resize(n);
  for (int i = 0; i < n; i++) colors[i] = i;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    join_nodes(a-1, b-1);
  }

  sorted_idx.resize(n);
  iota(sorted_idx.begin(), sorted_idx.end(), 0);
  sort(sorted_idx.begin(), sorted_idx.end(), cmp);

  for (vector<int>::iterator i = sorted_idx.begin(); i != sorted_idx.end(); ++i) {
    for (vector<int>::iterator j = sorted_idx.begin(); j != sorted_idx.end(); ++j) {
      join_nodes(*i, *j, true);
    }
  }

  cout << result << '\n';

  return 0;
}
