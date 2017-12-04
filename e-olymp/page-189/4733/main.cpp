#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;
  if (s.length() > 3) s = s.substr(s.length() - 3, 3);
  int n = atoi(s.c_str());
  cout << (n % 2 == 0 ? "Yes" : "No") << endl;
  cout << (n % 4 == 0 ? "Yes" : "No") << endl;
  cout << (n % 8 == 0 ? "Yes" : "No") << endl;

  return 0;
}
