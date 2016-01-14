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

  int n;
  cin >> n;
  int m = 0;

  vector<int> a(n+1, 0);
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    vector<int> b(n+1, 0);
    for(int j=1; j<=n; j++) {
      char v = s[j-1];
      if(v == '0') {
        b[j] = 0;
      } else {
        int sz = min(min(1 + a[j], 1 + b[j-1]), 1 + a[j-1]);
        if(sz > m) m = sz;
        b[j] = sz;
      }
    }
    a = b;
  }

  cout << m*m;

  return 0;
}
