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

  while (true) {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    if (n == 0 && a == 0 && b == 0 && c == 0) break;

    cout << 720 + 
            (n >= a ? n - a : 40 - (a - n)) * 360 / 40 +
            360 +
            (a <= b ? b - a : 40 - (a - b)) * 360 / 40 +
            (b >= c ? b - c : 40 - (c - b)) * 360 / 40
         << endl;
  }

  return 0;
}
