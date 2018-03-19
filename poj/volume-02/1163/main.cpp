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

  vector<int> a(n+1);
  vector<int> r(n+1);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cin >> a[j];
    }

    if (i > 1) {
      r[i] = r[i-1] + a[i];
    }

    for (int j = i-1; j >= 2; j--) {
      r[j] = max(r[j-1], r[j]) + a[j];
    }

    r[1] = r[1] + a[1];
  }
  int result = 0;
  for (int i = 1; i <= n; i++) {
    result = max(result, r[i]);
  }
  cout << result << endl;



  return 0;
}
