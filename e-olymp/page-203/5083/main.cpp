#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int sum_of_digits(int n) {
  int sum = 0;
  while (n > 0 ) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int max_sum = 0x7fffffff, max_n = -1;;
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int n;
    cin >> n;
    int current_sum = sum_of_digits(n);
    if (current_sum <= max_sum) {
      max_sum = current_sum;
      max_n = n;
    }
  }
  cout << max_n << '\n';

  return 0;
}
