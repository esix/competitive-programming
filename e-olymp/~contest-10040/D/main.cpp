#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

const int WIDTH = 600;
const int HEIGHT = 400;

struct Rect {
  int x1;
  int y1;
  int x2;
  int y2;
};


std::istream& operator>>(std::istream& is, Rect& r)
{
  is >> r.y1 >> r.x1 >> r.y2 >> r.x2;
  if (r.y2 < r.y1) swap(r.y2, r.y1);
  if (r.x2 < r.x1) swap(r.x2, r.x1);
  return is;
}


vector<Rect> rects;

inline bool is_in_rect(int y, int x, int rect_idx) {
  const Rect& r = rects[rect_idx];
  return r.x1 <= x && x <= r.x2 && r.y1 <= y && y <= r.y2;
}

bool is_in_rects(int y, int x) {
  for (int i = 0; i < rects.size(); i++) {
    if (is_in_rect(y, x, i)) return true;
  }
  return false;
}


bool cmp(int* a, int* b) { return (*a < *b); }


void solve() {
  vector< vector<bool> > available(HEIGHT, vector<bool>(WIDTH, true));
  for (int y = 0; y < HEIGHT; y++) {
    for (int x = 0; x < WIDTH; x++) {
      if (is_in_rects(y, x)) available[y][x] = false;
    }
  }

  vector< vector<bool> > pending(HEIGHT, vector<bool>(WIDTH, false));
  vector< vector<int*> > points(HEIGHT, vector<int*>(WIDTH, NULL));
  vector<int*> regions;

  for (int y = 0; y < HEIGHT; y++) {
    for (int x = 0; x < WIDTH; x++) {
      if (!available[y][x]) continue;     // rect here
      if (points[y][x]) continue;         // visited

      int* region = new int(0);           // create new region
      regions.push_back(region);

      queue< pair<int, int> > q;
      q.push(make_pair(y, x));
      pending[y][x] = true;

      while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        int yy = p.first, xx = p.second;
        points[yy][xx] = region;
        (*region)++;

        if (yy > 0        && !pending[yy-1][xx] && available[yy-1][xx]) {q.push(make_pair(yy-1, xx)); pending[yy-1][xx] = true; }
        if (xx > 0        && !pending[yy][xx-1] && available[yy][xx-1]) {q.push(make_pair(yy, xx-1)); pending[yy][xx-1] = true; }
        if (yy < HEIGHT-1 && !pending[yy+1][xx] && available[yy+1][xx]) {q.push(make_pair(yy+1, xx)); pending[yy+1][xx] = true; }
        if (xx < WIDTH-1  && !pending[yy][xx+1] && available[yy][xx+1]) {q.push(make_pair(yy, xx+1)); pending[yy][xx+1] = true; }
      }
    }
  }

  sort(regions.begin(), regions.end(), cmp);
  int m = regions.size();
  for (int i = 0; i < m; i++) {
    cout << *regions[i];
    if (i < m-1) cout << ' ';
  }
  cout << endl;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;

  while (cin >> n) {
    rects.resize(n);
    for (int i = 0; i < n; i++) {
      cin >> rects[i];
    }
    solve();
  }

  return 0;
}
