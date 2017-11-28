#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int n, r, w, h;
vector< pair<int, int> > gems;


inline bool gems_on_way(const pair<int, int>& gem0, const pair<int, int>& gem1) {
  int y0 = gem0.first, x0 = gem0.second;
  int y = gem1.first, x = gem1.second;

  if (y0 == y) return x0 == x;

  int dy = y - y0, dx = abs(x - x0);
  return (dx * r <= dy);
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> r >> w >> h;

  gems.resize(n);
  for (int i = 0; i < n; i++) cin >> gems[i].second >> gems[i].first;       // first <- y, second <- x to sort by y

  sort(gems.begin(), gems.end());

  vector<int> bests;
  bests.reserve(n);

  int result = 0;

  for (int i = 0; i < n; i++) {
    int possible_gems = 1;                                 // maximum possible gems to take if take i'th
    for (int j = 0; j < i; j++) {
      if (gems_on_way(gems[j], gems[i])) {                             // can take j and then i
        if (bests[j] + 1 > possible_gems) possible_gems = bests[j] + 1;
      }
    }
    bests[i] = possible_gems;
    if (possible_gems > result) result = possible_gems;
  }

  cout << result << '\n';  

  return 0;
}
