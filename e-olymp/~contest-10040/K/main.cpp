#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


typedef map<int, int> edges_1_t;
typedef map<int, edges_1_t > edges_t;

int n;
edges_t edges;
vector< vector<int> > neighbours;
vector<bool> marked;

int proceed_edges(int s) {
  marked[s] = true;
  vector<int> &ns = neighbours[s];

  int result = 1;

  for (int i = 0; i < ns.size(); i++) {
    int e = ns[i];
    if (!marked[e]) {
      int w = proceed_edges(e);
      edges[s][e] = w;
      edges[e][s] = n-w;
      result += w;
    }
  }

  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;
  marked.resize(n);
  neighbours.resize(n);

  for (int i = 0; i < n-1; i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    // connect a, b
    neighbours[a].push_back(b);
    neighbours[b].push_back(a);
  }

  proceed_edges(0);

  // max component size
  vector<int> max_w(n);

  for (edges_t::iterator it = edges.begin(); it != edges.end(); it++) {
    int i = it-> first;
    edges_1_t &e = it->second;
    int current_max = -1;
    for (edges_1_t::iterator jt = e.begin(); jt != e.end(); jt++) {
      int j = jt->first;
      int w = jt->second;
      if (w > current_max) current_max = w;
    }
    max_w[i] = current_max;
  }

  vector<int> bosses;
  int bosses_w = -1;
  for (int i = 0; i < n; i++) {
    if (bosses_w == -1 || bosses_w > max_w[i]) {
      bosses.clear();
      bosses_w = max_w[i];
      bosses.push_back(i);
    } else if (bosses_w == max_w[i]) {
      bosses.push_back(i);
    }
  }

  for(int i = 0; i < bosses.size(); i++) cout << (bosses[i]+1) << ' ';
  cout << '\n';
  return 0;
}
