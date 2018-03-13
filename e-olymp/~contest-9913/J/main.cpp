#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int k, n, m;
  cin >> k >> n >> m;

  vector<string> hs(k);

  for (int i = 0; i < k; i++) {
    string s;
    for (int j = 0; j < n; j++) {
      string line;
      cin >> line;
      s += line;
    }
    hs[i] = s;
  }

  n *= m;

  vector<string> patterns(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      patterns[i] += hs[j][i];
    }
  }

  set<string> uniq_patterns;
  for (int i = 0; i < n; i++) {
    uniq_patterns.insert(patterns[i]);
  }

  cout << uniq_patterns.size() << endl;


  return 0;
}
