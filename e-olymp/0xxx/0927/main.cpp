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
  cin >> n;
  int count = 0;
  for( int i = 0; i < n; i++) {
    int c;
    float price;
    cin >> c >> price;
    if (price < 50) count += c;
  }
  cout << count << endl;

  return 0;
}
