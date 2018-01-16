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

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int v;
      cin >> v;
      if (i <= j && v == 1)
        cout << (i+1) << ' ' << (j+1) << '\n';
    }
  }

  cout << endl;

  return 0;
}
