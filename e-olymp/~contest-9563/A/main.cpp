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

  int n;
  cin >> n;
  int steps = 0;

  for (; n != 1; steps++) {
    if ((n & 1) == 0)
      n >>= 1;
    else 
      n++;
  }

  cout << steps << endl;

  return 0;
}
