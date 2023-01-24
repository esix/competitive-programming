#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  map<int, int> vs;

  for (int i = 0; i < n; i++){
    int v;
    cin >> v;
    if (vs.find(v) != vs.end()) {
      vs[v]++;
    } else {
      vs.insert(pair<int, int>(v, 1));
    }
  }

  int free_item = vs.begin()->first + 1;
  int result = 0;

  for (map<int, int>::const_iterator it = vs.cbegin(); it != vs.cend(); ++it) {
    int count = it->second;
    if (free_item < it->first) free_item = it->first;
    for (int i = 1; i < count; i++) {
      while (vs.find(free_item) != vs.end()) free_item++;           // find next free item
      result += free_item - it->first;
      free_item++;
    }
  }
  
  cout << result << '\n';

  return 0;
}
