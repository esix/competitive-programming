// acmp:0112

#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;



void add (vector<int>&b, int x, int delta) {
  int n = b.size();
  for(; x < n; x = (x+1)|x) {
    b[x] += delta;
  }
}

int sum(vector<int>&b, int x) {
  int n = b.size(), res = 0;
  for(; x >= 0; x = ((x+1)&x)-1) {
    res += b[x];
  }
  return res;
}

int sum(vector<int>&b, int l, int r) {
  return sum(b, r) - sum(b, l-1);
}

int solve2(const vector<int>& l) {
  int n = l.size();
  vector<int>  b(n);
  int jumps = 0;
  for(int i = 0; i < n; i++) {
    jumps += sum(b, l[i]+1, n-1);
    add(b, l[i], 1);
  }
  return jumps;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k, res = 0, gt = -1;
  cin >> n >> k;

  for(int i = 0; i < k; i++) {
    vector<int> l(n);
    for(int j = 0; j < n; j++) {
      cin >> l[j];
    }
    int s = solve2(l);
    if(gt == -1 || gt < s) {
      res = i+1;
    }
  }
  cout << res;

  return 0;
}
