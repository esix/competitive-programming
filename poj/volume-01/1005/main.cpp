#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <cmath>


using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  double pi = M_PI;
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
      double x, y;
      cin >> x >> y;
      double r_squared = x * x + y * y;
      int year = (M_PI * r_squared / 2) / 50 + 1;
      cout << "Property " << i << ": This property will begin eroding in year " << year << ".\n";
  }
  cout << "END OF OUTPUT.\n";
  return 0;
}
