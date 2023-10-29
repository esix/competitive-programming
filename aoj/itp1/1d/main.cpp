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

  int t;
  cin >> t;
  int s = t % 60;
  int m = t / 60;
  int h = m / 60;
  m = m % 60;

  cout << h << ':' << m << ':' << s << endl;

  return 0;
}
