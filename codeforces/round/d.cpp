#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

vector< vector<bool> > plan;
vector< vector<int*> > res;

int get_value(int i, int j) {
  return !plan[i-1][j] + !plan[i+1][j] + !plan[i][j-1] + !plan[i][j+1];
}


int solve(int i, int j) {
  if(res[i][j]) {
    return *res[i][j];
  }
  if(!plan[i][j]) return 0;

  queue< pair<int, int> > q;

  int *placeholder = new int;
  int r = 0;
  q.push(make_pair(i, j));

  while(!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();

    int i = p.first, j = p.second;
    if(res[i][j]) continue;
    res[i][j] = placeholder;
    r += get_value(i, j);
    if(plan[i-1][j]) q.push(make_pair(i-1,j));
    if(plan[i+1][j]) q.push(make_pair(i+1,j));
    if(plan[i][j-1]) q.push(make_pair(i,j-1));
    if(plan[i][j+1]) q.push(make_pair(i,j+1));
  }
  *placeholder = r;
  return r;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m, k;
  cin >> n >> m >> k;
  string s;

  plan    = vector< vector<bool> >(n, vector<bool>(m));
  res     = vector< vector<int*> >(n, vector<int*>(m));

  getline(cin, s);

  for(int i = 0; i < n; i++) {
    getline(cin, s);
    for(int j = 0; j < m; j++) {
      plan[i][j] = (s[j] == '.');
    }
  }

  for(int i = 0; i < k; i++) {
    int y, x;
    cin >> y >> x;
    y--;
    x--;
    cout << solve(y, x) << "\n";
  }

  return 0;
}
