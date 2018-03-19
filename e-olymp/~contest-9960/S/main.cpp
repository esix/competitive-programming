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
  int result = 0;

  for (int i = 0; i < n; i++) {
    int cnt = 0;
    for (int j = 0; j < n; j++) {
      int v;
      cin >> v;
      cnt += v;
    }
    if (cnt == 1) {
      result ++;
    }
  }

  cout << result << endl;

  return 0;
}
