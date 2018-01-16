#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int gcdex(int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcdex(b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, m;
  cin >> m;

  for (int a = 1; a < m; a++) {
    int x, y;
    int g = gcdex (a, m, x, y);
    x = (x % m + m) % m;
	  cout << x << " ";
  }
  cout << '\n';

  return 0;
}
