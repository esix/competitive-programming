#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <limits>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  const int INF = numeric_limits<int>::max();

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int n;
    cin >> n;

    // hungarian algorythm
    int m = n;

    vector< vector<int> > supervisors(n + 1, vector<int>(m + 1));
    vector< vector<int> > employees(m + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> supervisors[i][j];
    for (int j = 1; j <= m; j++) for (int i = 1; i <= m; i++) cin >> employees[j][i];

    vector< vector<int> > a(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        a[i][j] += supervisors[i][j] + employees[j][i];
      }
    }



    vector<int> minv(m + 1, INF);
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        minv[j] = min(minv[j], a[i][j]);
      }
    }
 
    vector<int> u(n + 1);
    vector<int> v(m + 1);
    vector<int> p(m + 1);
    vector<int> way(m + 1);

    for (int i=1; i<=n; ++i) {
      p[0] = i;
      int j0 = 0;
	    vector<int> minv (n + 1, INF);
	    vector<char> used (n + 1, false);
      do {
        used[j0] = true;
        int i0 = p[j0],  delta = INF,  j1;
        for (int j=1; j <= m; ++j)
          if (!used[j]) {
            int cur = a[i0][j]-u[i0]-v[j];
            if (cur < minv[j])
              minv[j] = cur,  way[j] = j0;
            if (minv[j] < delta)
              delta = minv[j],  j1 = j;
          }
        for (int j=0; j<=m; ++j)
          if (used[j])
            u[p[j]] += delta,  v[j] -= delta;
          else
            minv[j] -= delta;
        j0 = j1;
      } while (p[j0] != 0);
      do {
        int j1 = way[j0];
        p[j0] = p[j1];
        j0 = j1;
      } while (j0);
    }


    vector<int> ans (n+1);
    for (int j=1; j<=n; ++j) ans[p[j]] = j;

    vector<int> fact(n + 1);
    for(int i = 1; i <= n; i++) fact[i] = fact[i-1] * i;

    int match = 1;
    for(int i = 1; i <= n; i++) {
      int inv = 0;
      for(int j = i + 1; j <= n; j++)
        if (ans[j] < ans[i]) inv++;
      match += inv * fact[n-i];
    }

    // ??? what is Best average difference

    for (int j=1; j<=n; ++j) cout << ans[j] << ' ';
    cout << endl;
  }

  return 0;
}
