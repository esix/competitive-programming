#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  typedef vector<int> elist;

  map<int, elist* > edges;

  int n, m;
  cin >> n >> m;
  vector<bool> cat(n);
  for(int i = 0; i < n; i++) {
    int v;
    cin >> v;
    cat[i] = !!v;
  }
  for(int i = 0; i < n-1; i++){
    int x, y;
    cin >> x >> y;
    x--; y--;

    if(edges.find(x) == edges.end()) edges.insert(make_pair(x, new elist()));
    edges[x]->push_back(y);

    if(edges.find(y) == edges.end()) edges.insert(make_pair(y, new elist()));
    edges[y]->push_back(x);
  }

  vector<bool> visited(n);
  queue< pair<int, int> > pending;
  pending.push(make_pair(0, +cat[0]));

  int result = 0;

  while(!pending.empty()) {
    pair<int, int> cur = pending.front();
    pending.pop();
    int id = cur.first, cost = cur.second;

    visited[id] = true;

    map<int, elist* >::iterator it = edges.find(id);
    if(it == edges.end()) {
      result ++;
      continue;
    }

    bool has_any_unvisited_neighbour = false;

    elist* es = it->second;
    for(elist::iterator it = es->begin(); it != es->end(); it++) {
      int new_id = *it;
      if(visited[new_id]) {
        continue;
      }
      has_any_unvisited_neighbour = true;
      if(+cat[new_id] + cost > m) {
        continue;
      }
      pending.push(make_pair(new_id, cat[new_id] ? cost + 1 : 0));
    }

    if(!has_any_unvisited_neighbour) {
      result++;
    }

  }
  cout << result;


  return 0;
}
