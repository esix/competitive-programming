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
  vector<int> t1(n), t2(n);

  for (int i = 0; i < n; i++) cin >> t1[i];
  for (int i = 0; i < n; i++) cin >> t2[i];

  sort(t1.begin(), t1.end());
  sort(t2.begin(), t2.end(), std::greater<int>());

  int t = 0;
  for (int i = 0; i < n; i++) {
      t += t1[i];
      t1[i] = t;
  }
  
  t = 0;
  for (int i = 0; i < n; i++) {
    if (t < t1[i]) t = t1[i];
    t += t2[i];
  }

  cout << t << endl;
  
  return 0;
}
