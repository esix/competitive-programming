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

  string a, b;
  getline(cin, a);
  getline(cin, b);


  int n = a.size(), m = b.size();


  int b_0 = 0, b_1 = 0;

  for(int i = 0; i < m - n; i++) {
    if(b[i] == '0') b_0++;
    else b_1++;
  }

  long long int res = 0;

  for(int i = 0; i < n; i++) {
    if(b[i + m - n] == '0') b_0++;
    else b_1++;

    if(a[i] == '1') res += b_0;
    else res += b_1;

    if(b[i] == '0') b_0--;
    else b_1--;
  }

  cout << res << endl;

  return 0;
}
