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

  int h;
  int a1 = -1, a2 = -1, a3 = -1;

  while (cin >> h) {
    if (a1 <= h) {
      a3 = a2; a2 = a1; a1 = h;
    } else if (a2 <= h) {
      a3 = a2; a2 = h;
    } else if (a3 <= h) {
      a3 = h;
    }
  }
  cout << a1 << endl << a2 << endl << a3 << endl;

  return 0;
}
