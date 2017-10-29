#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>


using namespace std;


vector<int> find_primes(int n) {
  vector<int> result;
  for (int i = 2; i < sqrt(n) + 1e-5; ) {
    if (n % i == 0) {
      result.push_back(i);
      n /= i;
    } else {
      i++;
    }
  }
  if ( n > 1 ) {
    result.push_back(n);
  }
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int i = 0;
  while (true) {
    int n;
    cin >> n;
    i++;
    if (n == 0) {
      break;
    }

    if (n == 1) {
      cout << "Case " << i << ": " << 2 << "\n";
      continue;
    }

    vector<int> primes = find_primes(n);
    if (primes.size() == 0) {                // n =1
      primes.push_back(1);
    }
    if (primes.size() == 1) {                // n is prime
      primes.push_back(1);
    }

    int result = 0, current_prime = -1, accumulator = 0;

    for(int j = 0; j < primes.size(); j++) {
      int prime = primes[j];

      if (current_prime == prime) {
        // accumulating product of primes
        accumulator *= prime;
      } else {         // next prime
        // flush to sum
        result += accumulator;
        accumulator = 1;
        current_prime = prime;
        accumulator = prime;
      }
    }

    result += accumulator;

    cout << "Case " << i << ": " << result << "\n";
  }
  return 0;
}
