#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <limits>

using namespace std;


int parse_bin(string s, int m) {
  int result = 0;
  for (int i = 0; i < m; i++) {
    result = 2 * result + (s[i] == '1');
  }
  return result;
}


vector< vector<int> > cache(0);

int solve(int m, const vector<int>& objs, int s, int a) {
  if (cache[s][a] != -1) return cache[s][a];

  int num = 0;
  for (int i = 0; i < objs.size(); i++) {
    if ((s & objs[i]) == a) num++; 
  }
  if (num <= 1) return cache[s][a]=0;

  int result = numeric_limits<int>::max();

  for (int i = 0; i < m; i++) {
    int mask = 1 << i;
    int sbit = s & mask;
    int s_next = s | mask;
    int a_next = a | mask;

    if (sbit == 0) {
      int s1 = solve(m, objs, s_next, a);
      int s2 = solve(m, objs, s_next, a_next);
      int r = max(s1, s2) + 1;
      if (r < result) {
        result = r;
      }
    }
  }

  cache[s][a] = result;
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true) {
    int m, n;
    cin >> m >> n;
    if (m == 0 && n == 0) break;
    
    vector<int> objs(n);

    for (int i = 0; i < n; i++) {
      string str;
      cin >> str;
      objs[i] = parse_bin(str, m);
    }

    cache = vector< vector<int> >(2048, vector<int>(2048, -1));
    int result = solve(m, objs, 0, 0);
    cout << result << endl;
  }

  return 0;
}
