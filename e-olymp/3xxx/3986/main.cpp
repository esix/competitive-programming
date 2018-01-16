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

  vector< vector<int> > a(n, vector<int>(n));
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  vector<int> outs;
  for (int j = 0; j < n; j++) {
    for (int i = 0; i < n; i++) {
      if (a[i][j]) goto outs_finder;
    }
    outs.push_back(j + 1);
    outs_finder: ;
  }

  vector<int> ins;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j]) goto ins_finder;
    }
    ins.push_back(i + 1);
    ins_finder: ;
  }

  cout << outs.size();
  for (int i = 0; i < outs.size(); i++) {
    cout << ' ' << outs[i];
  }
  cout << '\n';
    
  cout << ins.size();
  for (int i = 0; i < ins.size(); i++) {
    cout << ' ' << ins[i];
  }
  cout << '\n';

  return 0;
}
