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

  int T;
  cin >> T;
  for(int t = 1; t <=T; t++) {
    int n, m;
    cin >> n >> m;

    typedef vector<int> T;

    T a(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    bool reversed = false;

    for(int i = 0; i < m; i++) {
      string cmd;
      cin >> cmd;
      int d, y, z;
      if(cmd == "S") {
        cin >> d;
        for(T::iterator it = a.begin(); it != a.end(); it++) *it += d;
      } else if(cmd == "M") {
        cin >> d;
        for(T::iterator it = a.begin(); it != a.end(); it++) *it *= d;
      } else if(cmd == "D") {
        cin >> d;
        for(T::iterator it = a.begin(); it != a.end(); it++) *it /= d;
      } else if(cmd == "R") {
        reversed = !reversed;
      } else {
        cin >> y >> z;
        if(reversed) {
          y = n - y - 1;
          z = n - z - 1;
        }
        d = a[y];
        a[y] = a[z];
        a[z] = d;
      }
    }

    cout << "Case " << t << ":" << endl;
    if(reversed) {
      T::reverse_iterator it = a.rbegin();
      while(true) {
        cout << *it;
        if(++it == a.rend()) break;
        cout << " ";
      }
    } else {
      T::iterator it = a.begin();
      while(true) {
        cout << *it;
        if(++it == a.end()) break;
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
