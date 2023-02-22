#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

typedef long long INT;


map<int, INT> cache;

INT range_min(int n) {
  if (n < 0) return 0;
  else if (n == 0) return 1;
  if (cache.find(n) == cache.end()) {
    cache[n] = 9 * (range_min(n - 1) + range_min(n - 2) + range_min(n - 3));
  }

  return cache[n];
}

INT range_max(int n){
  if (n == 0) return 0;
  else return range_min(n - 3) + 10 * range_max(n-1);
}

INT solve(INT n) {
  INT result = 0, count = 0;
  int len;

  for (len = 3; range_max(len) < n; len++);

  int k = 0;
  for (int i = len; i > 0; i--){
    for (int j = 0; j <= 9; j++, n -= count){
      count = range_max(i - 1);

      if (j == 6 || k == 3) {
        int lo = 3 - k;
        if (j == 6) lo--;

        if (lo == 2) count += range_min(i - 3);
        else if (lo == 1) count += range_min(i - 2) + range_min(i - 3);
        else count += range_min(i-1) + range_min(i - 2) + range_min(i - 3);
      }

      if (n <= count) {
        if (k < 3) {
          if (j == 6) k++;
          else k = 0;
        }
        result = result * 10 + j;
        break;
      }
    }
  }
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    INT n;
    cin >> n;
    cout << solve(n) << endl;
  }
  return 0;
}
