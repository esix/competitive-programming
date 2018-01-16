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
  vector< vector<char> > mtx(n, vector<char>(n, '0'));
  
  for (int from = 1; from <= n; from++) {
    int e_count;
    cin >> e_count;
    for (int i = 0; i < e_count; i++) {
      int to;
      cin >> to;
      mtx[from-1][to-1] = '1';
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << mtx[i][j] << (j == n-1 ? '\n' : ' ');
    }
  }

  return 0;
}
