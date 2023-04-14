#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int lowbit(int x) {
  return x & (-x);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  while (cin >> n) {
    vector<int> pos(n + 1), val(n + 1);
    for (int i = 1; i <= n; i++) cin >> pos[i] >> val[i];

    vector<int> fw(n + 1);
    for (int i = 1; i <= n; i++) fw[i] = lowbit(i);

    vector<int> result(n + 1);

    for (int i = n; i >= 1; i--) {
      int l = 1, r = n;
      while (l < r) {
        int m = (l + r) / 2;
        int v = 0;
        for (int j = m; j > 0; j -= lowbit(j)) v += fw[j];

        if (v < pos[i] + 1) l = m + 1;
        else r = m;
      }
      result[l] = val[i];

      for ( ; l <= n; l += lowbit(l)) fw[l]--;
    }

    for (int i = 1; i <= n; i++) cout << result[i] << ' ';
    cout << endl;
  }

  return 0;
}
