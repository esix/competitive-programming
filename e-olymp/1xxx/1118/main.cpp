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

  if (n < 2) {
    cout << "Ooops!\n";
  } else {
    int M, m;
    cin >> m;
    M = m;

    for (int i = 1; i < n; i++) {
      int a;
      cin >> a;
      m = min(m, a);
      M = max(M, a);
    }

    cout << m << ' ' << M << endl;
  }
  

  return 0;
}
