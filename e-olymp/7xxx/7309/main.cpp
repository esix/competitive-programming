#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


bool is_fits(unsigned long v, unsigned long seed) {
  for (int i = 0; i < 32; i++) {
    if ((seed << i) == v) return true;
  }
  return false;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<unsigned long> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  unsigned long seed = v[0];    // any number from all

  while ((seed & 1) == 0) seed >>= 1;

  for (int i = 0; i < n; i++) {
    if (!is_fits(v[i], seed)) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";
  return 0;
}
