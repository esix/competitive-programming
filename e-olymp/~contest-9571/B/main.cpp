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
  while(cin >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int result = -1;

    for (int i = 0; i < n - 1; i++) {
      int s = v[i];
      int max_v = s; 
      for (int j = i+1; j < n; j++) {
        int e = v[j];
        if (e < s) {
          break;
        }
        if (e >= max_v) {
          max_v = e;
          result = max(result, j - i);
        }
      }
    }

    cout << result << '\n';
  }

  return 0;
}
