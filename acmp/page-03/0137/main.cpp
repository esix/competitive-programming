#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <cfloat>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int INF = DBL_MAX;

  int n, v;
  cin >> n;

  vector< vector<double> > d(n, vector<double>(n));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> v;
      d[i][j] = (v == 0 && i != j) ? INF : v;
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

  vector< vector<int> > rs(n, vector<int>(n));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      rs[i][j] = d[i][j] != INF ? 1 : 0;
    }
  }

  for(int k = 0; k < n; k++) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if (d[i][k] < INF && d[k][j] < INF) {
          if(d[i][k] + d[k][j] < d[i][j]) {
            d[i][j] = d[i][k] + d[k][j];
            rs[i][j] = 2;
          }
        }
      }
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cout << rs[i][j] << (j < n - 1 ? " " : "\n");
    }
  }

  return 0;
}
