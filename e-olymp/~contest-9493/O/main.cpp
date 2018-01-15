#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int binpow(int a, int n, int m) {
	if (n == 0) {
		return 1;
  }
	if (n % 2 == 1)
		return (binpow(a, n-1, m) * a) % m;
	else {
		int b = binpow (a, n >> 1, m);
		return (b * b) % m;
	}
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b, m;
  cin >> a >> b >> m;

  cout << binpow(a, b, m) << '\n';

  return 0;
}
