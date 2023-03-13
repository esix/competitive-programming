#include <iostream>
#include <cmath>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  cout << max(0, 199 - n) << endl;
  return 0;
}
