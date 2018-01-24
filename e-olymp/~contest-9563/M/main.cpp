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

  int n, a, m;
  cin >> n >> m;
  for(int i = 1; i < n; i++) (cin >> a), m = min(m, a);
  cout << m << endl;

  return 0;
}
