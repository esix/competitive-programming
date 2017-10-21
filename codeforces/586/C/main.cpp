#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <list>
#include <map>

using namespace std;


struct Entry {
  int v, d, p;
  int index;
  bool away;
};


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<Entry> es;
  vector<int> res;

  for(int i = 0; i < n; i++) {
    Entry e;
    cin >> e.v >> e.d >> e.p;
    e.index = i + 1;
    e.away = false;
    es.push_back(e);
  }

  for(int i = 0; i < n; ++i) {
    if(es[i].away) continue;
    res.push_back(es[i].index);

    int delta_p = es[i].v;
    vector<int> crazy_indices;

    for(int j = i + 1; j < n; j++) {
      if(es[j].away) continue;

      if(es[j].p >= delta_p) {
        es[j].p -= delta_p;
      } else {
        es[j].away = true;
        crazy_indices.push_back(j);
      }

      delta_p -= 1;
      if(delta_p <= 0)
          break;
    }

    for(vector<int>::iterator cit = crazy_indices.begin(); cit != crazy_indices.end(); ++cit) {
      int j = *cit;
      int delta_p = es[j].d;
      for(int k = j+1; k < n; k++) {
        if(es[k].away) continue;
        if(es[k].p >= delta_p) {
          es[k].p -= delta_p;
        } else {
          es[k].away = true;
          delta_p += es[k].d;
        }
      }
    }

  }

  cout << res.size() << endl;
  for(int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
  cout << endl;


  return 0;
}
