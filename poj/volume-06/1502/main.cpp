#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <limits>
#include <set>
#include <cstdlib>

using namespace std;

class Vertex {
public:
  int dist;
  int id;
  Vertex(int p_id): id(p_id), dist(numeric_limits<int>::max()) {};
  Vertex(int p_id, int p_dist): id(p_id), dist(p_dist) {};
  set< pair<int, Vertex*> > es;
};

struct VertexPtrCmp {
  bool operator()(const Vertex* v1, const Vertex *v2){
    return v1->dist == v2->dist ? 
          v1->id < v2->id : 
          v1->dist < v2->dist;
  }
};

typedef set<Vertex*, VertexPtrCmp> vertices_set_t;
typedef set< pair<int, Vertex*> > edges_t;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  int n;
  cin >> n;

  vector<Vertex*> vs;
  vs.push_back(new Vertex(0, 0));

  for (int i = 1; i < n; i++) {
    vs.push_back(new Vertex(i));
    for (int j = 0; j < i; j++) {
      cin >> s;
      if (s != "x") {
        int cost = atoi(s.c_str());
        vs[i]->es.insert(make_pair(cost, vs[j]));
        vs[j]->es.insert(make_pair(cost, vs[i]));
      }
    }
  }

  vertices_set_t q;
  vertices_set_t visited;
  q.insert(vs[0]);

  while (q.size()) {
    Vertex* v = *q.begin(); 
    q.erase(q.begin());
    visited.insert(v);

    // cout << "Watching " << v->id + 1 << " (dist=" << v->dist << ")" << endl;

    for (edges_t::iterator it = v->es.begin(); it != v->es.end(); ++it) {
      int cost = it->first;
      Vertex* next = it->second;
      if (visited.find(next) == visited.end()) {        // next not visited
        int new_dist = v->dist + cost;
        if (new_dist < next->dist) {                                // need to update and (re)insert to queue
          vertices_set_t::iterator next_it = q.find(next);
          if (next_it != q.end()) q.erase(next_it);
          next->dist = new_dist;
          q.insert(next);
          // cout << "  Updated dist " << next->id + 1<< ": " << next->dist << endl;
        }
      }
    }
  }

  // for (vertices_set_t::iterator it = visited.begin(); it != visited.end(); ++it) {
  //   cout << (*it)->id + 1 << " (" << (*it)->dist << ") ";
  // }
  // cout << endl;

  cout << (*visited.rbegin())->dist << endl;
  return 0;
}
