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

  int min_sum = 0x7fffffff;
  int from, to;
  cin >> from >> to;

  for (int n = from; n <= to; n++) {
    int current_sum = sum_of_digits(n);
    min_sum = min(min_sum, current_sum);
  }

  int result = 0;
  for (int n = from; n <= to; n++) {
    int current_sum = sum_of_digits(n);
    if (current_sum == min_sum) result ++;
  }

  cout << result << '\n';

  return 0;
}
