#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  while (cin >> s) {
    if (s.length() < 3) continue;
    int n = atoi(s.c_str() + 2);
    int r = 0;
    for (int x = n + 1; x <= 2 * n; x++) {
      if ((n * x) % (x - n) == 0) r++;
    }
    cout << r << '\n';
  }

  return 0;
}
