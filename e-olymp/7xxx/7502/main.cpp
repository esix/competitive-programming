#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

const int M = 1000000007;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, t, q, x;
  cin >> n >> t;

  vector<int> vs(t+1);
  vs[0] = 1;

  for (int i = 0; i < n; i++) {
    cin >> q >> x;
    int N = min((q + t) / (t + 1), q - x);

    vector<vector<int> > d1(t+1);
    for (int j = 0; j <= t; j++) d1[j].resize(N+1);
    for (int j = 0; j <= t; j++) d1[j][0] = vs[j];

    vector<vector<int> > d2(t+1);
    for (int j = 0; j <= t; j++) d2[j].resize(N+1);

    for (int j = 0; j < q; j++) {
      for (int j = 0; j <= t; j++) fill(d2[j].begin(), d2[j].end(), 0);

      for (int ii = 0; ii < t+1; ii++) {
        for (int jj = 0; jj < N+1; jj++) {
          int v = d1[ii][jj];

          if (!v) {
            continue;
          }

          int idx = max(0, ii-1);
          d2[idx][jj] += v;
          if (d2[idx][jj] > M) d2[idx][jj] -= M;

          if (ii == 0 && jj < N) {
            d2[t][jj+1] += v;
            if (d2[t][jj+1] > M) d2[t][jj+1] -= M;
          }
        }
      }

      swap(d1, d2);
    }

    fill(vs.begin(), vs.end(), 0);
    for (int ii = 0; ii < t + 1; ii++) {
      for (int jj = 0; jj < N + 1; jj++) {
        vs[ii] += d1[ii][jj];
        if (vs[ii] > M) vs[ii] -= M;
      }
    }
  }

  int result = 0;
  for (int i = 0; i < vs.size(); i++) {    // total summ
    result += vs[i];
    result %= M;
  }
  cout << result << '\n';

  return 0;
}
