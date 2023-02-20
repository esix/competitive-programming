#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <bitset>
#include <cmath>

using namespace std;

#define MAX 65536

set<int> primes;

int build_primes() {
  std::bitset<MAX> sieve;

  for (int i = 2; i < MAX; i++) {
    if (!sieve.test(i)) {
      for (int j = i + i; j < MAX; j += i) sieve.set(j);
      primes.insert(i);
    }
  }
  return primes.size();
}

bool is_prime(int n) {
  if (n == 1) return false;
  int k = sqrt(n);
  int r = 0;
  for (set<int>::iterator p = primes.begin(); *p <= k && p != primes.end(); ++p) {
    if (n % *p == 0) {
      return false;
    }
  }
  return true;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  build_primes();

  while (true) {
    int a, d, n;
    cin >> a >> d >> n;
    if (a == 0 && d == 0 && n == 0) break;

    while (true) {
      if (is_prime(a)) {
        n--;
        if (n == 0) {
          cout << a << endl;
          break;
        }
      }
      a += d;
    }
  }

  return 0;
}
