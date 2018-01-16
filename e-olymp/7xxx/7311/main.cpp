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

  string s;
  cin >> s;

  int result = 0;
  int cnt = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') {
      cnt++;
    } else {      // )
      cnt --;
      if (cnt == -1) {
        result ++;
        cnt = 0;
      }
    }
  }

  result += cnt;
  cout << result << '\n';

  return 0;
}
