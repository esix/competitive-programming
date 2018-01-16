#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

typedef map<int, vector<int> > T;

T inside;
T outside;

vector<int> need_stop_number;      // for each passanger - its stop number
vector<int> ks;                   // result
 

void process_stop(int stop) {
  ks.push_back(stop);

  T::iterator it = inside.find(stop);
  if (it != inside.end()) inside.erase(it);

  T::iterator jt = outside.find(stop);
  if (jt != outside.end()) {
    vector<int> &ps= jt->second;
    for (int i = 0; i < ps.size(); i++) {       // for each passenger outside this stop
      int p = ps[i];                     // passenger id
      int go_to_stop = need_stop_number[p];
      inside[go_to_stop].push_back(p);
    }
  }
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  need_stop_number.resize(n);

  for (int i = 0; i < n; i++) {
    int l;
    cin >> l >> need_stop_number[i];
    outside[l].push_back(i);
  }

  process_stop(1);

  int current_stop = 1;
  while (current_stop <= m && !inside.empty()) {
    process_stop(inside.begin()->first);
  }
  
  cout << ks.size() << '\n';
  for (int i = 0; i < ks.size(); i++) cout << ks[i] << '\n';

  return 0;
}
