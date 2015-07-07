#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long int INT;


int main() {
  ios::sync_with_stdio(false);

  INT N;
  cin >> N;

  if(N < 9) {
    cout << "0";
  } else if(N == 9) {
    cout << "8";
  } else {
    cout << 72 << string(N - 9 - 1, '0');
  }

  return 0;
}
