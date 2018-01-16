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
  cin >> a >> b;

  vector<bool> composite(b+1);
  for (int p = 2; p <= b; p++) {
    if (!composite[p]) {
      if (p >= a) cout << p << ' ';
      for(int j = p + p; j <= b; j += p) composite[j] = true;
    }
  }
  
  return 0;
}
