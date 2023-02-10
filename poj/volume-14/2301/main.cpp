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

  int n, s, d;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> d;

    int b1 = 1.0*(s - d) / 2.0;
    int a1 = s - b1;
    int b2 = 1.0*(s + d) / 2.0;
    int a2 = s - b2;

    if (a1 == b2 && a2 == b1 && a1 >= 0 && b1 >= 0) {
      cout << a1 << ' ' << b1 << endl;
    } else {
      cout << "impossible\n";
    }
  }

  return 0;
}
