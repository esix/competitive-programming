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

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  float sum = 0;
  for (int i = 0; i < 12; i++) {
      float f;
      cin >> f;
      sum += f;
  }
  cout << '$' << sum / 12.0 << endl;
  return 0;
}
