#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

void hanoi(char from, char to, char middle, int n) {
  if (n == 0) return;
  hanoi(from, middle, to, n-1);
  cout << from << ' ' << to << '\n';
  hanoi(middle, to, from, n-1);
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  hanoi('1', '2', '3', n);

  return 0;
}
