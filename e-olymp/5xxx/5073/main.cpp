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

  vector< vector<bool> > es(n+1, vector<bool>(n+1));

  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    if (es[a][b]) {
      cout << "YES\n";
      return 0;
    }
    es[a][b] = true;
  }
  
  cout << "NO\n";

  return 0;
}
