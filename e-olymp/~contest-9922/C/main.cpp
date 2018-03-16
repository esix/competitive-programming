#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;


const int N = 50000;
vector<bool> is_prime(N, true);


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  if (n == 1) {
    cout << "No\n";
    return 0;
  }

  int N = sqrt(n) + 1;

  for (int i = 2; i < N; i++) {
    if (n % i == 0) {
      cout << "No\n";
      return 0;
    }
  }

  cout << "Yes\n";
  return 0;
}
