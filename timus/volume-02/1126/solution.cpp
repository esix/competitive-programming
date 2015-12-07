#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int m;
  cin >> m;

  multiset<int> s;
  queue<int> q;

  for(int i = 0; true; i++) {
    int v;
    cin >> v;
    if(v == -1) {
      break;
    }

    s.insert(v);
    q.push(v);

    if(i >= m - 1) {
      cout << *s.rbegin() << '\n';
      multiset<int>::iterator it = s.find(q.front());
      s.erase(it);
      q.pop();
    }
  }

  return 0;
}
