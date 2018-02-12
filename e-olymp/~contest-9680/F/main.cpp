#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


typedef long long INT;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  INT n, a;
  cin >> n >> a;
  INT r = 0;
  INT ai = 1;

  if (a == 1) {
    r = n * (n+1) / 2;

  } else {
    for (INT i = 1; i <= n; i++) {
      ai *= a;
      r += i * ai;
    }
  }

  cout << r <<endl;

  return 0;
}
