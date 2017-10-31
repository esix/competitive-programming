#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

template <typename INT> 
INT gcd(INT m, INT n) {
  if (m == 0) return n;
  if (n == 0) return m;
  if (m == n) return m;
  if (m == 1) return (INT)1;
  if (n == 1) return (INT)1;

  bool m_even = ((m & 1) == 0);
  bool n_even = ((n & 1) == 0);

  if (m_even) {
    return n_even ? 2 * gcd(m >> 1, n >> 1) : gcd(m >> 1, n);
  }
  // ! m_even
  if (n_even) {
    return gcd(m, n >> 1);
  }

  // !n_even && !m_even
  return (n > m) ? gcd(m, (n - m) >> 1) : gcd((m - n) >> 1, n);
}

typedef long int INT;


INT solve(const vector<INT>& ns) {
  int N = ns.size();
  INT result = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      result += gcd(ns[i], ns[j]);
    }
  }
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int m; 
    cin >> m;

    vector<INT> ns(m);
    for (int j = 0; j < m; j++) {
      cin >> ns[j];
    }

    cout << solve(ns) << '\n';
  }

  return 0;
}
