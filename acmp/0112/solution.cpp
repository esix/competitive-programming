#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int solve(const vector<int>& l) { // TLE9
  map<int, int> cnts;
  int n = l.size();
  int res = 0;

  for(int i = 0; i < n; i++) {
    int v = l[i];

    for(map<int, int>::reverse_iterator it = cnts.rbegin(); it != cnts.rend(); ++it) {
      if(it->first <= v) {
        break;
      }
      res += it->second;
    }

    map<int, int>::iterator it = cnts.find(v);
    if(it == cnts.end()) {
      cnts.insert(make_pair(v, 1));
    } else {
      it->second++;
    }
  }
  return res;
}



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
  multimap<int,int>m;
  for(int i = 0; i < n; i++) {
    m.insert(make_pair(l[i], i));
  }

  int i = 0;
  vector<int> mas(n), b(n);

  for(multimap<int, int>::iterator it = m.begin(); it != m.end(); ++it, ++i) {
    mas[i] = it->second;
  }

  int jumps = 0;
  for(int i = 0; i < n; i++) {
    jumps += sum(b, mas[i]+1, n-1);
    add(b, mas[i], 1);
  }
  return jumps;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k, res = 0;
  cin >> n >> k;

  for(int i = 0; i < k; i++) {
    vector<int> l(n);
    for(int j = 0; j < n; j++) {
      cin >> l[j];
    }
    res += solve2(l);
  }
  cout << res;

  return 0;
}
