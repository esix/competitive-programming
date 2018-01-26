#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> vs(n);
  for (int i = 0; i < n; i++) cin >> vs[i];

  stack<int> indices;


  for (int i = 0; i < n; i++) {
    int current = vs[i];

    // perform replace
    while (!indices.empty()) {
      int idx = indices.top();
      int v = vs[idx];
      if (current <= v) break;
      indices.pop();
      vs[idx] = current;
    }


    // add i to non-replaced indices list
    indices.push(i);
  }

  while (!indices.empty()) {
    int idx = indices.top();
    indices.pop();
    vs[idx] = 0;
  }

  for (int i = 0; i < n; i++) cout << vs[i] << ' ';
  cout << '\n';

  return 0;
}
