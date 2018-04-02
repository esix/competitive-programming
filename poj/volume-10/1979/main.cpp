#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <queue>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int w, h;
    cin >> w >> h;
    if (w == 0) break;

    vector<string> l(h);
    for (int i = 0; i < h; i++) cin >> l[i];

    int sx = 0, sy = 0;
    for (int y = 0; y < h; y++) {
      for (int x = 0; x < w; x++) {
        if (l[y][x] == '@') {
          sy = y;
          sx = x;
        }
      }
    }

    queue< pair<int, int> > q;
    q.push(make_pair(sy, sx));
    set <pair<int, int> > visited;
    visited.insert(make_pair(sy, sx));

    int result = 0;
    while (!q.empty()) {
      pair<int, int> p = q.front();
      q.pop();
      result++;
      int y = p.first, x = p.second;

      pair<int, int> pp;

      pp = make_pair(y-1, x);
      if (0 <= pp.first && pp.first < h && 0 <= pp.second && pp.second < w && 
          visited.find(pp) == visited.end() &&
          l[pp.first][pp.second] == '.') {
            q.push(pp);
            visited.insert(pp);
          }

      pp = make_pair(y+1, x);
      if (0 <= pp.first && pp.first < h && 0 <= pp.second && pp.second < w && 
          visited.find(pp) == visited.end() &&
          l[pp.first][pp.second] == '.') {
            q.push(pp);
            visited.insert(pp);
          }

      pp = make_pair(y, x-1);
      if (0 <= pp.first && pp.first < h && 0 <= pp.second && pp.second < w && 
          visited.find(pp) == visited.end() &&
          l[pp.first][pp.second] == '.') {
            q.push(pp);
            visited.insert(pp);
          }

      pp = make_pair(y, x+1);
      if (0 <= pp.first && pp.first < h && 0 <= pp.second && pp.second < w && 
          visited.find(pp) == visited.end() &&
          l[pp.first][pp.second] == '.') {
            q.push(pp);
            visited.insert(pp);
          }
    }

    cout << result << '\n';
  }

  return 0;
}
