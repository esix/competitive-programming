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

  int n, m;
  cin >> n >> m;
  vector<int> a(n);

  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  for(int i = 0; i < m; i++) {
    int b;
    cin >> b;
    vector<int>::iterator upper = std::upper_bound(a.begin(), a.end(), b);
    int u = upper - a.begin();
    cout << u << " ";
  }


  return 0;
}
