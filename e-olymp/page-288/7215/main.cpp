#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <map>
#include <queue>

using namespace std;



typedef pair<int, int> point_t;
typedef map<point_t, string> prev_t;

int m, n;
vector< string > level;


bool is_valid(point_t p) {
  return (0 <= p.first && p.first < m &&
          0 <= p.second && p.second < n &&
          level[p.first][p.second] == ' ');
}


bool is_exit_coords(point_t p) {
  return (0 == p.first || p.first == m-1 ||
          0 == p.second || p.second == n-1);
}

bool is_exit(point_t p) {
  return (is_exit_coords(p) && level[p.first][p.second] == ' ');
  
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> m >> n;

  point_t start, end;

  level.resize(m);
  string s;
  getline(cin, s);

  for (int y = 0; y < m; y++) {
    getline(cin, s);
    int s_pos;
    if ((s_pos = s.find('+')) != string::npos) start = make_pair(y, s_pos);
    level[y] = s;
  }

  if (is_exit_coords(start)) {
    cout << "0\n";
    return 0;
  }

  prev_t prev;
  queue< point_t > q;
  q.push(start);
  prev[start] = "";

  while (!q.empty()) {
    point_t p = q.front();
    q.pop();

    if (is_exit(p)) {
      cout << prev[p].size() << '\n';
      cout << prev[p] << '\n';
      return 0;
    }

    int y = p.first, x = p.second;
    point_t pp;
    pp = make_pair(y, x-1); if (is_valid(pp) && prev.find(pp) == prev.end()) { q.push(pp); prev[pp] = prev[p] + 'w'; }
    pp = make_pair(y, x+1); if (is_valid(pp) && prev.find(pp) == prev.end()) { q.push(pp); prev[pp] = prev[p] + 'e'; }
    pp = make_pair(y-1, x); if (is_valid(pp) && prev.find(pp) == prev.end()) { q.push(pp); prev[pp] = prev[p] + 'n'; }
    pp = make_pair(y+1, x); if (is_valid(pp) && prev.find(pp) == prev.end()) { q.push(pp); prev[pp] = prev[p] + 's'; }
  }

  cout << "-1\n";

  return 0;
}
