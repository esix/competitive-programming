#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int n;
vector< vector<int> > neighbours;
vector<int> marks;

int search(int s) {
  vector<int> &ns = neighbours[s];

  int max_w = -1;
  int max_w_count = 0;

  for (int i = 0; i < ns.size(); i++) {
    int e = ns[i];
    int w = marks[e];
    if (w == -1) w = search(e);

    if (max_w == -1 || max_w < w) {
      max_w = w;
      max_w_count = 1;
    } else if (max_w == w) {
      max_w_count++;
    }
  }

  int result;

  if (max_w_count == 0) {
    result = 1;
  } else if (max_w_count > 1){
    result = max_w + 1;
  } else {
    result = max_w;
  }

  marks[s] = result;
  return result;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;

  for (int t = 0; t < T; t++) {
    int k, p;
    cin >> k >> n >> p;

    neighbours.resize(n+1); fill(neighbours.begin(), neighbours.end(), vector<int>());

    for (int i = 0; i < p; i++) {
      int a, b;
      cin >> a >> b;
      neighbours[b].push_back(a);    // reverse edge
    }

    marks.resize(n+1); fill(marks.begin(), marks.end(), -1);

    cout << k << ' ' << search(n) << '\n';
  }

  return 0;
}
