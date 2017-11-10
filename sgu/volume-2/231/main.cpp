#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


void make_sieve(int n, set<int>& ps) {
  if (n < 2) {
    return;
  }

  vector<bool> sieve(n+1);

  int prime = 2;
  ps.insert(prime);

  while (true) {
    for (int c = prime + prime; c <= n; c += prime) sieve[c] = true;
    do {
      if (++prime > n) return;
    } while (sieve[prime]);

    ps.insert(prime);
  }
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  set<int> ps;
  make_sieve(n, ps);

  stringstream ss;
  int result_count = 0;

  for (set<int>::iterator it = ps.begin(); it != ps.end(); ++it) {
    int p1 = 2, p2 = *it;
    int sum = p1 + p2;
    if (ps.find(sum) == ps.end()) continue;     // sum is not prime
    result_count++;
    ss << p1 << ' ' << p2 << '\n';
  }

  cout << result_count << '\n';
  cout << ss.rdbuf();

  return 0;
}
