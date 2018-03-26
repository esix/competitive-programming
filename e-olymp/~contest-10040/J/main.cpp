#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int n, m;
vector<int> o;
vector<int> color;
vector<int> color_balance;
vector< vector<int> > neighbours;

void fill_color(int s, int c) {
  color[s] = c;
  color_balance[c] += o[s];
  vector<int> &ns = neighbours[s];

  for (int i = 0; i < ns.size(); i++) {
    int b = ns[i];
    if (color[b] == -1) {
      fill_color(b, c);
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  o.resize(n);
  for (int i = 0; i < n; i++) cin >> o[i];

  color.resize(n);
  fill(color.begin(), color.end(), -1);

  neighbours.resize(n);
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    neighbours[a].push_back(b);
    neighbours[b].push_back(a);
  }

  for (int i = 0; i < n; i++) {
    if (color[i] == -1) {
      int c = color_balance.size();
      color_balance.push_back(0);
      fill_color(i, c);
    }
  }

  for (int i = 0; i < color_balance.size(); i++) {
    if (color_balance[i] != 0) {
      cout << "IMPOSSIBLE\n";
      return 0;
    }
  }


  cout << "POSSIBLE\n";
  return 0;
}
