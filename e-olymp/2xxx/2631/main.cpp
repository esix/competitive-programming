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


int solve(const vector<int>& numbers) {
  int N = numbers.size();
  int max_gcd = 0;
  for(int i = 0; i < N-1; i++) {
    for(int j = i+1; j < N; j++) {
      int current_gcd = gcd(numbers[i], numbers[j]);
      if (current_gcd > max_gcd) {
        max_gcd = current_gcd;
      }
    }
  }
  return max_gcd;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string line;
  std::getline(cin, line);
  std::istringstream iss(line);
   
  int n;
  iss >> n;

  vector<int> numbers;

  for (int i = 0; i < n; i++) {
    numbers.clear();
    std::getline(cin, line);
    std::istringstream iss(line);
    int x;
    while (iss >> x) {
      numbers.push_back(x);
    }
    cout << solve(numbers) << '\n';
  }

  return 0;
}
