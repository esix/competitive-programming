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
  vector<int> vs(n);
  for (int i = 0; i < n; i++) cin >> vs[i];

  for (int i = 0; i < n; i++) {
    int j = i + 1;
    for(; j < n; j++) {
      if (vs[j] > vs[i]) break;
    }
    vs[i] = (j < n) ? vs[j]: 0;
  }

  for (int i = 0; i < n; i++) cout << vs[i] << ' ';
  cout << '\n';

  return 0;
}
