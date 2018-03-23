#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <list>

using namespace std;


struct Edge {
  int from;
  int to;
  double rate;
  double commission;

  Edge(int p_from , int p_to, double p_rate, double p_commission) : 
        from(p_from), to(p_to), rate(p_rate), commission(p_commission) {
          //
        }

  double run(double v) {
    return (v - commission) * rate;
  }
};


#define INF 1e9


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m, s;
  double v;
  cin >> n >> m >> s >> v;
  s--;  // zero based

  list<Edge> edges;

  for (int i = 0; i < m; i++) {
    int a, b;
    double r_ab, c_ab, r_ba, c_ba;
    cin >> a >> b >> r_ab >> c_ab >> r_ba >> c_ba;
    a--; b--;  // zero based
    Edge ab(a, b, r_ab, c_ab);
    Edge ba(b, a, r_ba, c_ba);
    edges.push_back(ab);
    edges.push_back(ba);
  }

  vector<double> vs(n, 0);
  vs[s] = v;

  for (int i = 0; i < n; i++) {
    for (list<Edge>::iterator e = edges.begin(); e != edges.end(); ++e) {
      double new_v = e->run(vs[e->from]);
      vs[e->to] = max(vs[e->to], new_v);
    }
  }
  // after n iterations value of every currency might not increase

  for (list<Edge>::iterator e = edges.begin(); e != edges.end(); ++e) {
    double new_v = e->run(vs[e->from]);
    if (new_v > vs[e->to]) {    // increased
      cout << "YES\n";
      return 0;
    }
  }


  cout << "NO\n";
  return 0;
}
