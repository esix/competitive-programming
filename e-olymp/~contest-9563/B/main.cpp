#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


//
// n / (m+1) == [n / m]
//

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int count = 0;
  for (int m = 1; m <= n; m++) {
    if (n % m ==  n / m) count++;
  }

  cout << count << endl;

  return 0;
}