#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;

vector< vector<int> > neighbours;
set<int> visited;
int finish;

int run(int s, int d) {
  if (s == finish) {
    return 1;
  }
  if (d == 0) {
    return 0;
  }

  visited.insert(s);

  int result = 0;
  vector<int> &ns = neighbours[s];
  for (int i = 0; i < ns.size(); i++) {
    int e = ns[i];
    if (visited.find(e) == visited.end()) {    // e not visited
      result += run(e, d-1);
    }
  }

  visited.erase(s);

  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k, start, d;
  cin >> n >> k >> start >> finish >> d;

  neighbours.resize(n+1);

  for (int i = 0; i < k; i++) {
    int s, e;
    cin >> s >> e;
    neighbours[s].push_back(e);
  }

  cout << run(start, d) << '\n';

  return 0;
}
