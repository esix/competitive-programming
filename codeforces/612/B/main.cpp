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

  vector<int> pos(n+1);

  for(int i = 0; i < n; i++) {
    int f;
    cin >> f;
    pos[f] = i;
  }

  long long int res = 0;

  for(int f = 2; f <= n; f++) {
    res += abs(pos[f] - pos[f-1]);
  }

  cout << res << endl;

  return 0;
}
