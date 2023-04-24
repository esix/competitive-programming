#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include<string.h>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  for (int t = 1; cin >> n >> m; t++) {
    if (t > 1) {
      cout << endl << "**********************************" << endl << endl;
    }

    cout << "Problem #" << t << endl << endl;

		vector< vector<int> > H(n + 2, vector<int>(n + 2));
    vector< vector<int> > V(n + 2, vector<int>(n + 2));
    vector<int> result(n + 2);
    bool hasSquares = false;

    for (int i = 0; i < m; i++) {
      string op;
      int x, y;
      cin >> op >> x >> y;
      if (op == "H") H[x][y] = 1;
      else V[y][x] = 1;
    }

    for (int i = n; i >= 0; i--) {
      for (int j = n; j >= 0; j--) {
        if (H[i][j]) H[i][j] = H[i][j+1] + 1;
        if (V[i][j]) V[i][j] = V[i+1][j] + 1;
      }
    }

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        for (int k = min(H[i][j], V[i][j]); k >= 1; k--) {
          if (H[i+k][j] >= k && V[i][j+k] >= k) {
            result[k]++;
            hasSquares = true;
          }
        }
      }
    }


    if (hasSquares) {
      for (int i = 1; i < n; i++) {
        if (result[i]) {
          cout << result[i] << " square (s) of size " << i << endl;
        }
      }
    } else {
      cout << "No completed squares can be found." << endl;
    }
  }

  return 0;
}
