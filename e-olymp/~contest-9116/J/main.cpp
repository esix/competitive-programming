#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>

using namespace std;

struct Point {
  int x; int y;
  inline int dist(const Point& p2) {
    return abs(p2.x-x) + abs(p2.y-y);
  }
};

std::istream& operator>>(std::istream& is, Point& p) {
  return is >> p.x >> p.y;
}

int n;
vector<Point> ps;
vector<bool> visited;

void search_path(int s) {
  visited[s] = true;
  for (int e = 1; e < n+2; e++) {
    if (!visited[e] && ps[s].dist(ps[e]) <= 1000) search_path(e);
  }
}

bool solve() {
  visited.resize(n+2);
  fill(visited.begin(), visited.end(), false);
  search_path(0);
  return visited[n+1];
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;

  for (int t = 0; t < T; t++) {
    cin >> n;
    ps.resize(n+2);
    for (int i = 0; i < n+2; i++) cin >> ps[i];
    if (solve()) cout << "happy\n"; else cout << "sad\n";
  }  

  return 0;
}
