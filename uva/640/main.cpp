// TLE TLE TLE
// added some crazy optimizations
//

#include <iostream>
#include <algorithm>
using namespace std;


inline int d(int n) {
  int res = 1;
  while(n /= 10) res++;
  return res;
}

inline int r(int n) {
  return (n-1) % 9 + 1;
}

inline int dr_star(int n) {
  n = (n-1) % 9 + 1;
  return (n & 1) ? (n + 9) >> 1 : n >> 1;
}

inline int sod(int n) {
  int res = 0;
  while(n > 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

inline int abs(int n) {
  return n < 0 ? -n : n;
}

bool is_sn(int i) {
  int h = dr_star(i);
  int max = d(i);

  for(int k = 0; k <= max; k++) {
    if(sod(abs(i - h - 9*k)) == h + 9 * k) return false;
  }
  return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  for(int i = 1; i <= 1000000; i++) {
    if(is_sn(i)) cout << i << '\n';
  }

  return 0;
}
