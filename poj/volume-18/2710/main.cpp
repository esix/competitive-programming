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

  int N;
  cin >> N;

  for (int i = 1; i <= N; i++) {
    int n, d, b, e;
    cin >> n >> d >> b >> e;
    cout << "Problem set " << i << ": " << n << " / " << d << ", base 7 digits " << b << " through " << e << ": ";
    n %= d;

    int base = 7;
    for (int j = 0; j <= e; j++) {
      n *= base;
      int digit = n / d;
      n %= d;
      if (j >= b) cout << digit;
    }
    cout << endl;
  }

  return 0;
}
