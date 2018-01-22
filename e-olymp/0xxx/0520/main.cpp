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

  long long int a, summ = 0;

  for (; cin >> a; summ += a);
  cout << summ << endl;

  return 0;
}
