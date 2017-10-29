#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <string.h>


using namespace std;

int t[101][101];

int T(int n, int k) {      // A026820
  if (n == 0 || k == 1) {
    return 1;
  }
  if (t[n][k] == 0) {
    t[n][k] = T(n, k-1) + (k > n ? 0 : T(n-k, k));
  }
  return t[n][k];
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  memset(t, 0, 101*101*sizeof(int));

  int n;
  cin >> n;
  cout << T(n,n);    // A000041 = A026820(n, n)
  cout << '\n';
  return 0;
}
