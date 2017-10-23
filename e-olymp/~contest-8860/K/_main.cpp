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

  long long k;
  cin >> k;

  for (int i = 0; i < k; i++) {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    bool result = false;

    while (true) {
      if (a == b && c == d) {
        result = true;
        break;
      }
      if (b == 0) break;
      if (b > a) {
        swap(a,b);
      }
      a -= b;
    }

    if (result) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }


  return 0;
}
