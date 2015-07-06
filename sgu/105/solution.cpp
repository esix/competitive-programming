#include <iostream>

using namespace std;


int main() {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  // will be triples of (0, 1, 2)(2,3,4)(4,5,6)

  int t_number = (n-1) / 3;
  int t_ord = (n-1) % 3;
  int result = t_number * 2 + t_ord;



  cout << result;

  return 0;
}
