#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <bitset>

using namespace std;


#define MAX 32768

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




int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n = build_primes();

  while (true) {
    int a;
    cin >> a;
    if (!a) break;
    
    int r = 0;
    for (set<int>::iterator i = primes.begin(); *i <= (a >> 1); ++i) {
      if (primes.find(a - *i) != primes.end()) {
        // cout << a << " = " << *i << " + " << a - *i << endl;
        r++;
      }
    }
    // cout << a << " : " << r << endl;
    cout << r << endl;
  }

  return 0;
}
