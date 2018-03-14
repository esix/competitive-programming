#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

int A048691(int n) {
  int r = 1;

  for (int i = 2; i <= sqrt(n); i++) {
    int p = 0;     // power of prime

    while (n % i == 0) {
      //cout << "Divisible by " << i << endl;
      n /= i;
      p++;
    }

    r *= 2 * p + 1;
  }
  if (n > 1) r *= 3;

  return r;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long long  n;
  cin >> n;

  cout << A048691(n) << endl;

  return 0;
}
