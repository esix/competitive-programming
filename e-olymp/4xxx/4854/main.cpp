#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  getline(cin, s);
  int n = std::atoi(s.c_str());

  vector<stringstream> rs(n+1);

  for (int i = 1; i <= n; i++) {
    getline(cin, s);
    istringstream iss(s);
    int j;
    while (iss >> j) {
      if (rs[j].str().length() != 0) {
        rs[j] << ' ';
      }
      rs[j] << i;
    }
  }

  cout << n << '\n';
  for (int i = 1; i <= n; i++) {
    cout << rs[i].str() << '\n';
  }

  return 0;
}
