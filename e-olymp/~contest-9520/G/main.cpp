#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int f(int n, int m) {
  if (n == m) return n + 1;
  if (n == 0) return m + 1;
  if (m == 0) return n + 1;

  if (n < m) return f(m, n);

  // n > m
  return f(n % m, m);
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;
  cout << f(a-1,b-1) << endl;

  return 0;
}
