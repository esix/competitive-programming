#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;

int solve(int n) {
  // https://oeis.org/A060432
  int k = floor((sqrt(1+8.0*(n - 1))-1)/2);
  return n*(k+1)-k*(k+1)*(k+2)/6;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int n;
    cin >> n;
    if (!n) break;
    cout << n << ' ' << solve(n) << endl;
  }

  return 0;
}
