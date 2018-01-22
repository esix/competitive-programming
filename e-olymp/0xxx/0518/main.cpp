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

  int n, a, b;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cout << a + b << '\n';
  }

  return 0;
}
