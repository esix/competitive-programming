#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  unsigned long rabbits = 1;

  while (n --> 0) {
    if (rabbits > k ) {
      rabbits -= k;
    }
    rabbits *= 2;
  }

  cout << rabbits << endl;

  return 0;
}
