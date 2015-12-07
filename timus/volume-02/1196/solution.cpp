#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  set<int> vs;
  int n, m, v, result = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> v;
    vs.insert(v);
  }

  cin >> m;
  for(int i = 0; i < m; i++) {
    cin >> v;
    if(vs.find(v) != vs.end())
      result++;
  }

  cout << result;

  return 0;
}
