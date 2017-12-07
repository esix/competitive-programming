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
typedef map<point_t, point_t*> prev_t;

int n;
vector< vector<char> > level;


bool is_valid(point_t p) {
  return (0 <= p.first && p.first < n &&
          0 <= p.second && p.second < n &&
          (level[p.first][p.second] == '.' || level[p.first][p.second] == 'X'));
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  point_t start, end;

  level.resize(n);
  string s;

  for (int y = 0; y < n; y++) {
    cin >> s;
    int s_pos, e_pos;
    if ((s_pos = s.find('@')) != string::npos) start = make_pair(y, s_pos);
    if ((e_pos = s.find('X')) != string::npos) end = make_pair(y, e_pos);
    level[y] = vector<char>(s.begin(), s.end());
  }

  prev_t prev;
  queue< point_t > q;
  q.push(start);
  prev[start] = new point_t(start);

  while (!q.empty()) {
    point_t p = q.front();
    q.pop();

    if (p == end) break;

    int y = p.first, x = p.second;
    point_t pp;
    pp = make_pair(y, x-1); if (is_valid(pp) && prev.find(pp) == prev.end()) { q.push(pp); prev[pp] = new point_t(p); }
    pp = make_pair(y, x+1); if (is_valid(pp) && prev.find(pp) == prev.end()) { q.push(pp); prev[pp] = new point_t(p); }
    pp = make_pair(y-1, x); if (is_valid(pp) && prev.find(pp) == prev.end()) { q.push(pp); prev[pp] = new point_t(p); }
    pp = make_pair(y+1, x); if (is_valid(pp) && prev.find(pp) == prev.end()) { q.push(pp); prev[pp] = new point_t(p); }
  }

  prev_t::iterator it = prev.find(end);
  
  if (it == prev.end()) {
    cout << "N\n";
  } else {
    cout << "Y\n";
    point_t *p = &end;
    while (p && *p != start) {
      level[p->first][p->second] = '+';
      p = prev[*p];
    }
    for (int y = 0; y < n; y++) {
      cout << string(level[y].begin(), level[y].end()) << endl;
    }
  }

  return 0;
}
