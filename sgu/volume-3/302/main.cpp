#include <iostream>
#include <utility>
#include <stack>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <ctype.h>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  getline(cin, s);

  string buf, result;
  stack<int> tag;

  for (int i = 0; i < s.size(); i++) {
    char c = s[i];
    if (c == '<') {
      if (s.substr(i, 4) == "<UP>") {
        i += 3;
        tag.push(1);
        continue;
      }
      if (s.substr(i, 6) == "<DOWN>") {
        i += 5;
        tag.push(-1);
        continue;
      }
      if (s.substr(i, 5) == "</UP>") {
        i += 4;
        tag.pop();
        continue;
      }
      if (s.substr(i, 7) == "</DOWN>") {
        i += 6;
        tag.pop();
        continue;
      }
    }
    if (tag.size()) {
      if (tag.top() == 1) {
        c = toupper(c);
      } else {
        c = tolower(c);
      }
    }
    cout << c;
  }
  cout << endl;

  return 0;
}
