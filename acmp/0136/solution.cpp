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

  int INF = 1000000;

  int n, v;
  cin >> n;

  vector< vector<int> > d(n, vector<int>(n));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> v;
      d[i][j] = (v != -1) ? v : INF;
    }
  }

  for(int k = 0; k < n; k++) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if (d[i][k] < INF && d[k][j] < INF) {
          d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
      }
    }
  }

  int M = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(d[i][j] != INF)
        M = max(M, d[i][j]);
    }
  }

  cout << M;
  return 0;
}
