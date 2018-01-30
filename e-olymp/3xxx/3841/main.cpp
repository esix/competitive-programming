#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <queue>
#include <functional>


using namespace std;

typedef multiset<int, greater<int> > T;

bool solve(T& q) {
  while (!q.empty()) {
    T::iterator it = q.begin();
    int v = *it;
    q.erase(it);

    vector<int> extras;
    while (v--) {
      if (q.empty()) return false;
      T::iterator jt = q.begin();
      int vv = *jt; 
      q.erase(jt);

      if (vv != 1) extras.push_back(vv - 1);
    }
    for (int i = 0; i < extras.size(); i++) {
      q.insert(extras[i]);
    }
  }
  return true;
}




int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  while (getline(cin, s)) {
    stringstream ss(s);
    T vs;
    //priority_queue<int> vs;
    
    int a;
    while (ss >> a) {
      vs.insert(a);
      //vs.push(a);
    }

    if (vs.empty()) continue;

    if (solve(vs)) {
      cout << "ok\n\n";
    } else {
      cout << "fail\n\n";
    }
  }

  return 0;
}
