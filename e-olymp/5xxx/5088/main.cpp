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

  vector<int> cnt(n);

  int result = 0;

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;

    cnt[a]++;
    if (cnt[a] == 1) result++;
    if (cnt[a] == 2) result--;

    cnt[b]++;
    if (cnt[b] == 1) result++;
    if (cnt[b] == 2) result--;
  }

  cout << result << endl;

  return 0;
}
