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

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int n;
    cin >> n;

		int n2 = 0, n5 = 0;
		for (int x = 2; x <= n; x *= 2) n2 += n / x;
		for (int x = 5; x <= n; x *= 5) n5 += n / x;
    cout << min(n2, n5) << endl;
  }  

  return 0;
}
