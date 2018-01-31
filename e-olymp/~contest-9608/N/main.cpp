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

  
  int n;
  cin >> n;

  set<int> vs;
  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    vs.insert(v);
  }

  set<int>::iterator it = vs.begin();
  ++it;
  cout << *vs.begin() << ' ' << *(it) << '\n';

  return 0;
}
