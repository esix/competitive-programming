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

  int n;
  cin >> n;

  vector< vector<int> > v(n, vector<int>(n));
  bool is_good = true;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
      if (i == j &&  v[i][j] != 0) is_good = false;
      if (i > j && v[i][j] != v[j][i]) is_good = false;
    }
  }

  cout << (is_good ? "YES" : "NO") << endl;

  return 0;
}
