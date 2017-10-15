#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

vector<int> p, q;

bool could(int i, int j) {
  if(q[i] && q[i]!=j) return 0;
  if(q[i]) return 1;

  q[i] = j;
  if(!could(j, p[i])) q[i] = 0;

  return q[i];
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  p = vector<int>(n+1);
  q = vector<int>(n+1);

  for(int i = 1; i <= n; i++) {
    cin >> p[i];
  }

  for(int i = 1; i <= n; i++) {
    if (!q[i]) {
      bool e = false;
      for(int j = 1; j <= n; j++) {
        if(could(i,j)) {
          e = true;
          break;
        }
      }

      if (!e) {
        cout << 0 << endl;
        return 0;
      }
    }
  }

  for(int i = 1; i <= n; i++) {
    cout << q[i] << " ";
  }

  cout << endl;
}
