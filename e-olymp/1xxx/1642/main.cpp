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

  int n;
  cin >> n;

  if (n == 1) {
    cout << "YES\n";
    return 0;
  }
  if (n == 2) {
    cout << "NO\n";
    return 0;
  }
  if (n == 3) {
    cout << "NO\n";
    return 0;
  }
  if (n == 4) {
    cout << "NO\n";
    return 0;
  }

  int N = sqrt(n);

  for (int k = 2; k <= N; k++) {
    if (n % k == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  
  cout << "NO\n";
  return 0;
}