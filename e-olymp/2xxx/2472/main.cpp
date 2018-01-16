#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  vector<stringstream> es(n+1);
  vector<bool> initialized(n+1);
  
  while (k--) {
    int cmd;
    cin >> cmd;
    
    if (cmd == 1) {
      int a, b;
      cin >> a >> b;

      if (initialized[a]) es[a] << ' '; else initialized[a] = true;
      es[a] << b;

      if (initialized[b]) es[b] << ' '; else initialized[b] = true;
      es[b] << a;

    } else if (cmd == 2) {
      int a;
      cin >> a;
      cout << es[a].str() << '\n';
    }
  }

  return 0;
}
