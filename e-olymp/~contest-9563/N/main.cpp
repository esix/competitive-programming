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

  int n, a;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a;
    if (a & 1) {
      cout << a << ' ';
    }
  }  
  cout << endl;

  return 0;
}
