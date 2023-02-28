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
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    char c = 0;
    int j = 0;
    
    while (j < s.length()) {
      c = s[j];
      int count = 0;
      for (; j < s.length() && s[j] == c; j++, count++);
      cout << count << c;
    }
    
    cout <<  endl;
  }

  return 0;
}
