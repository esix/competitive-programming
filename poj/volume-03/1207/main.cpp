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

  int a, b;
  while (cin >> a >> b) {
    cout << a << ' ' << b << ' ';

    if (a > b) swap(a, b);

    int result = 0;
    for(int i = a; i <= b; i++) {
      int v = i, r = 1;
      while (true) {
        if (v == 1) break;
        if ((v & 1) == 0) v = v >> 1; 
        else v = 3 * v + 1;
        r++;
      }
      result = max(result, r);
    }
    cout << result << endl;
  }
  
  return 0;
}
