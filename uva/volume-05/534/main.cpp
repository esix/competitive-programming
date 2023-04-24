#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>
#include <iomanip>

using namespace std;


int dist2(const pair<int, int> & p1, pair<int, int> p2) {
  return (p1.first - p2.first)*(p1.first - p2.first) + (p1.second - p2.second)*(p1.second - p2.second);
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  for(int scenario = 1; ; scenario++) {
    int n;
    cin >> n;
    if(!cin || n == 0) break;

    vector< pair<int, int> > coords(n);

    for(int i = 0; i < n; i++) {
      cin >> coords[i].first >> coords[i].second;
    }

    const int INF = 2147383647;
    vector<int> d(n, INF);
    d[0] = 0;

    bool modified = true;
    while(modified) {
      modified = false;
      for(int i = 0; i < n; ++i) {
        for (int j=0; j < n; ++j) {
          int new_d = max(d[i], dist2(coords[i], coords[j]));
          if (d[i] < INF && d[j] > new_d) {
            d[j] = new_d;
            modified = true;
          }
        }
      }
    }

    cout << "Scenario #" << scenario << endl << "Frog Distance = " << fixed << setprecision(3)<< sqrt(d[1]) << endl << endl;

    //cout << D << endl;
  }

  return 0;
}
