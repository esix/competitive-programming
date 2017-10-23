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


int solve(int a, int b) {

  if (a > b) swap(a, b);
  // a <= b

  if (a == 1) return b;

  int lcm = a * b / gcd(a, b);

  int aa = lcm / a;     // microelements per big-piece
  int bb = lcm / b;     // microelements per small-piece
  // aa >= bb

  int result = a * (aa / bb);

  if (aa % bb != 0) {
    int micros_left = a * (aa % bb);
    result += solve(a, micros_left / bb) ;
  }

  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a, b;
  cin >> a >> b;

  int result  = solve(a, b);
  cout << result << '\n';

  return 0;
}
