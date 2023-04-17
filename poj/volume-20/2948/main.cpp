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

  while(true) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) break;

    int v;
    int result[501][501], bloggium[501][501], yeyenum[501][501];

    for (int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> v;
        yeyenum[i][j] = j == 0 ? v : v + yeyenum[i][j - 1];
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> v;
        bloggium[i][j] = i == 0 ? v : v + bloggium[i - 1][j];
      }
    }

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        int y = i == 0 ? yeyenum[i][j] : result[i - 1][j] + yeyenum[i][j];
        int b = j == 0 ? bloggium[i][j] : result[i][j - 1] + bloggium[i][j];
        result[i][j] = max(y, b);
      }
    }

    cout << result[n - 1][m - 1] << endl;
  }

  return 0;
}
