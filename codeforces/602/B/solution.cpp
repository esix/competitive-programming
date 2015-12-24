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

  int lu = 1, ld = 1;
  int a_prev;
  cin >> a_prev;
  int max_l = 1;

  for(int i = 1; i < n; i++) {
    int a;
    cin >> a;
    if(a_prev < a) {
      ld = lu + 1;
      lu = 1;
    } else if(a_prev == a) {
      lu++;
      ld++;
    } else {
      lu = ld + 1;
      ld = 1;
    }
    a_prev = a;
    max_l = max(max_l, max(lu, ld));
  }
  cout << max_l << endl;


  return 0;
}
