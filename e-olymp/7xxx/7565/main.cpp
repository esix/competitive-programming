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

  int n, k;
  cin >> n >> k;

  vector< vector<int> > hardness(n);

  for (int i = 0; i < n; i++) {
    int p; cin >> p;
    hardness[i].resize(p);
    for (int j = 0; j < p; j++) {
      cin >> hardness[i][j];
    }
  }

  int i = 0, j = 0;
  int tasks = 0, summ = 0;

  while (tasks < k) {
    if (j < hardness[i].size()) {
      int v = hardness[i][j];
      if (v >= summ) {
        summ += v;
        tasks++;
      }
    } else {
      summ += 50;
      tasks++;
    }
    
    if (++i >= n) {
      i = 0; 
      j++;
    }
  }

  cout << summ << endl;

  return 0;
}
