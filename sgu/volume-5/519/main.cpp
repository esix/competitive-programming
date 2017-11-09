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

  int n, m;
  cin >> n >> m;

  vector<vector<int> > heights(n+2);

  for (int i = 0; i < n+2; i++) heights[i] = vector<int>(m + 2);

  for (int i = 1; i <= n; i++) {
    string s;
    cin >> s;
    for (int j = 1; j <= m; j++) {
      heights[i][j] = s[j-1] - '0';
    }
  }

  int result = 0;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      int h = heights[i][j];
      if (h) {
        result += 2;
      }

      if (heights[i-1][j] < h) result += h - heights[i-1][j];
      if (heights[i+1][j] < h) result += h - heights[i+1][j];
      if (heights[i][j-1] < h) result += h - heights[i][j-1];
      if (heights[i][j+1] < h) result += h - heights[i][j+1];

    }
  }

  cout << result << endl;
  

  return 0;
}
