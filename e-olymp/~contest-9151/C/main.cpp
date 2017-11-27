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

  for (int i = 0; i < n; i++) {
    int id;
    vector<int> v(10);
    cin >> id;
    for (int j = 0; j < 10; j++) cin >> v[j];
    sort(v.begin(), v.end());
    cout << id << ' ' << v[7] << '\n';
  }

  return 0;
}
