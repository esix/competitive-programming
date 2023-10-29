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
  if (a < b) cout << "a < b\n";
  else if (a > b) cout << "a > b\n";
  else cout << "a == b\n";

  return 0;
}
