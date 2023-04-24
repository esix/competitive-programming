#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <limits>
#include <iomanip>

using namespace std;

typedef vector< pair<int, int> > links_t;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  for (int tc = 1; true; tc++) {
    int n = 0;

    map<int, int> indices;
    links_t links;
    while (true) {
      int a, b;
      cin >> a >> b;
      if (a == 0 && b == 0) break;
      n++;
      if (indices.find(a) == indices.end()) indices.insert(make_pair(a, indices.size()));
      if (indices.find(b) == indices.end()) indices.insert(make_pair(b, indices.size()));
      links.push_back(make_pair(indices[a], indices[b]));
    }
    if (n == 0) break;

    n = indices.size();
    vector< vector<int> > a(n, vector<int>(n, 2 * n));

    for (links_t::iterator it = links.begin(); it != links.end(); ++it) {
      a[it->first][it->second] = 1;
    }

    for(int k = 0; k < n; k++){
      for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
        }
      }
    }

    double result = 0;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        if (i != j) result += a[i][j];
      }
    }
    cout << "Case " << tc << ": average length between pages = " << 
      std::fixed << std::setprecision(3) << result / (n * n - n) << " clicks" << endl;
  }

  return 0;
}
