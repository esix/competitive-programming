#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, g_min_count, h_min_count;
  cin >> n >> g_min_count >> h_min_count;

  if (n < g_min_count + h_min_count) {
    cout << "-1\n";
    return 0;
  }

  int total = 0;
  multiset<int> gs, hs;

  for (int i = 0; i < n; i++) {
    int g, h;
    cin >> g >> h;
    if (g > h) {          // to g army
      total += g;
      gs.insert(g - h);
    } else {              // to h army
      total += h;
      hs.insert(h - g);
    }
  }

  // |gs| + |hs| = n
  // g_min_count + h_min_count <= n

  if (gs.size() < g_min_count) {
    // must move some elements from h to g, correcting total cost
    int move_elements = g_min_count - gs.size();    
    for (set<int>::iterator it = hs.begin(); move_elements--; ++it) total -= *it;
  }
  
  if (hs.size() < h_min_count) {
    // must move some elements from g to h, correcting total cost
    int move_elements = h_min_count - hs.size();    
    for (set<int>::iterator it = gs.begin(); move_elements--; ++it) total -= *it;
  }

  cout << total << '\n';

  return 0;
}
