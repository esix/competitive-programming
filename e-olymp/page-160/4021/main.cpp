#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int n, m;

bool is_valid(int i , int j) {
  return 0 <= i && i < n && 0 <= j && j < m;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> m;
  
  vector< vector<int> > b(n, vector<int>(m));
  b[0][0] = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (is_valid(i+2, j+1)) b[i+2][j+1] += b[i][j];
      if (is_valid(i+1, j+2)) b[i+1][j+2] += b[i][j];
    }
  }

  cout << b[n-1][m-1] << endl;

  return 0;
}
