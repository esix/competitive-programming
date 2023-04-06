#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> cache(10001);
  int v = 1;
  for (int i = 1; i <= 10000; i++) {
    v *= i;
    while (v % 10 == 0) {
      v /= 10;
    }
    v %= 100000;
    cache[i] = v % 10;
  }
  int n;
  while (cin >> n) {
    cout << std::setw(5) << n << " -> " << cache[n] <<endl;
  }

  return 0;
}
