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
  multimap<int, int> ls;

  cin >> n;
  for(int i = 0; i < n; i++) {
    int s, e;
    cin >> s >> e;
    ls.insert(make_pair(e, s));
  }

  int min_time = 0, res = 0;
  for(map<int, int>::iterator it = ls.begin(); it != ls.end(); it++) {
    if(it->second > min_time) {
      //cout << it->second << "-" << it->first << " * " << endl;
      min_time = it->first;
      res++;
    } else {
      //cout << it->second << "-" << it->first << endl;
    }
  }
  cout << res << endl;

  return 0;
}
