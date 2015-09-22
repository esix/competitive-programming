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
  int a0;
  cin >> a0;

  int cur = 1;
  int max = 0;

  for(int i = 1; i < n; i++) {
    int a;
    cin >> a;
    if(a0 <= a) {
      cur++;
    } else {
      if(max < cur) max = cur;
      cur = 1;
    }
    a0 = a;
  }
  if(max < cur) max = cur;

  cout << max;

  return 0;
}
