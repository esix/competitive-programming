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

  int n;
  while (cin >> n) {
    cout << 4*n << " " << n*n << endl;
  }  

  return 0;
}
