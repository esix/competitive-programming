#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;

#define MAX_SIEVE 63249

vector<long> sieve_primes;


void make_sieve() {
  vector<bool> sieve(MAX_SIEVE);

  int i = 2;
  for (int i = 2; i < MAX_SIEVE; i++) {
    if (!sieve[i]) {        //  next prime
      sieve_primes.push_back(i);
      for (int j = i; j < MAX_SIEVE; j+= i) sieve[j] = true;
    }
  }
}

bool is_prime(long n) {
  if (n == 1) return false;
  if (n == 2) return true;
  long m = ceil(sqrt(n));
  for (int i = 0; sieve_primes[i] <= m; i++) {
    if (n % sieve_primes[i] == 0) return false;
  }
  return true;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  sieve_primes.reserve(6339);

  make_sieve();

  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    long n;
    cin >> n;
    for (n += 1; !is_prime(n); n++);
    cout << n << '\n';
  }

  return 0;
}
