#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <stack>

using namespace std;

typedef pair<int, int> coord_t;

int w, h;
vector<string> maze;

bool is_free(int y, int x) {
  if (y < 0 || x < 0 || y >= h || x >= w) return false;
  char c = maze[y / 2][x / 2];
  if (x % 2 == 0 && y % 2 == 0 || x % 2 == 1 && y % 2 == 1) 
    return c == '/';
  else
    return c == '\\';
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  for (int n = 1; true; n++) {
    cin >> w >> h;
    if (w == 0 && h == 0) break;

    maze.clear();
    for(int i = 0; i < h; i++) {
      string line;
      cin >> line;
      maze.push_back(line);
    }

    h *= 2;
    w *= 2;

    set<coord_t> visited;
    const coord_t invalid = make_pair(-1, -1);
    int best = 0;
    int n_cycles = 0;

    for (int y = 0; y < h; y++) {
      for (int x = 0; x < w; x++) {
        coord_t start = make_pair(y, x);

        if (!is_free(y, x)) continue;
        if (visited.find(start) != visited.end()) continue;

        int result = 0;
        bool found_cycle = false;

        visited.insert(start);
        stack<coord_t> q;
        q.push(start);

        while (!q.empty()) {
          coord_t p = q.top();
          q.pop();
          coord_t next1 = invalid, next2 = invalid;
          int y = p.first, x = p.second;

          for (int yy = y - 1; yy <= y + 1; yy++) {
            for (int xx = x - 1; xx <= x + 1; xx++) {
              if ((y / 2 == yy / 2) + (x / 2 == xx / 2) == 1 && is_free(yy, xx)) {
                if (next1 == invalid) next1 = make_pair(yy, xx);
                else next2 = make_pair(yy, xx);
              }
            }
          }

          if (next1 != invalid && visited.find(next1) != visited.end() &&
              next2 != invalid && visited.find(next2) != visited.end()) {
                found_cycle = true;
                n_cycles++;
                result++;
                break;
          }

          if (next1 != invalid && visited.find(next1) == visited.end()) {
            visited.insert(next1);
            q.push(next1);
          }
          if (next2 != invalid && visited.find(next2) == visited.end()) {
            visited.insert(next2);
            q.push(next2);
          }

          result++;
        }

        if (found_cycle && result > best) best = result;

      }
    }

    cout << "Maze #" << n << ":" << endl;
    if (best) {
      cout << n_cycles << " Cycles; the longest has length " << best + 1 << endl;
    } else {
      cout << "There are no cycles." << endl;
    }
    cout << endl;
  }

  return 0;
}
