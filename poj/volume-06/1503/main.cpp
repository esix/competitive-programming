#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


string add(const string& a, const string& b) {
  int rem = 0;
  stringstream result;
  for (int i = 0; i < a.length() || i < b.length(); i++) {
    int d1 = i < a.length() ? (a[i] - '0') : 0;
    int d2 = i < b.length() ? (b[i] - '0') : 0;
    int r = d1 + d2 + rem;
    rem = r / 10;
    r = r % 10;
    result << r;
  }
  if (rem) {
    result << rem;
  }
  return result.str();
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string a, result = "0";

  while (true) {
    cin >> a;
    if (a == "0") {
      break;
    }
    reverse(a.begin(), a.end());
    result = add(result, a);
  }

  reverse(result.begin(), result.end());

  cout << result << '\n';

  return 0;
}
