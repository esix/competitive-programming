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

  int a, b, c;
  cin >> a >> b >> c;
  int A = min(min(a, b), c);
  int C = max(max(a, b), c);
  int B = a + b + c - A - C;  
  cout << A << ' ' << B << ' ' << C << endl;

  return 0;
}
