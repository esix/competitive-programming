#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  queue<int> pending;
  map<int, int> steps;

  pending.push(n);
  steps.insert(make_pair(n, 0));

  while (true) {
    int n = pending.front();
    pending.pop();

    int n_steps = steps[n];

    if (n == 0) {
      cout << n_steps << '\n';
      return 0;
    }

    int m = n + 1;
    if (steps.find(m) == steps.end()) {   // m not walked
      pending.push(m);
      steps.insert(make_pair(m, n_steps+1));
    }

    m = n - 1;
    if (steps.find(m) == steps.end()) {   // m not walked
      pending.push(m);
      steps.insert(make_pair(m, n_steps+1));
    }

    if ((n & 1) == 0) {
      m = n >> 1;
      if (steps.find(m) == steps.end()) {   // m not walked
        pending.push(m);
        steps.insert(make_pair(m, n_steps+1));
      }
    }

  }

  return 0;
}
