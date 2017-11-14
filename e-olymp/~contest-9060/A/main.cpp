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

  string s;
  getline(cin, s);
  int n = std::stoi(s);
  
  int result = 0;

  for (int i = 0; i < n; i++) {
    getline(cin, s);
    result += std::count(s.begin(), s.end(), '1');

    if (s[2*i] == '1') result--;
  }

  cout << (result / 2) << endl;

  return 0;
}
