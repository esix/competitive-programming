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
  map<char, int> cnt;
  for(int i = 0; i < s.size(); i++) {
    char c = s[i];
    cnt[c] ++;
  }
  map<char, int>::reverse_iterator from_end = cnt.rbegin();

  for(map<char, int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
    if(it->second % 2 != 0) {
      while(from_end != cnt.rend()) {
        if(from_end->second % 2 != 0) break;
        ++from_end;
      }
      if(from_end == cnt.rend()) break;
      it->second++;
      from_end->second--;
    }
  }
  int n = s.size();
  char *res = new char[n + 1];
  res[n] = 0;
  int pos = 0;

  for(map<char, int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
    int num = it->second / 2;
    if(it->second % 2 != 0) {
      num++;
    }

    for(int i = 0; i < num; i++) {
      res[n - pos - 1] = res[pos] = it->first;
      pos++;
    }
  }
  cout << res << endl;
  return 0;
}
