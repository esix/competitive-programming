//
// g++ -std=c++11 ./solution.cpp
//

#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<unsigned int> container;
  container.reserve(n/2+2);
  priority_queue<unsigned int, vector<unsigned int> > q(std::less<unsigned int>(), std::move(container));

  int i;

  for(i = 0; i < n/2+1; i++) {
    int v;
    cin >> v;
    q.push(v);
  }

  for(; i < n; i++) {
    int v;
    cin >> v;
    q.push(v);
    q.pop();
  }

  //cout << q.front() << endl;
  if(n % 2 == 0) {
    unsigned int a = q.top();
    q.pop();
    a += q.top();
    cout << a/2;
    if(a % 2 != 0) cout << ".5";
    cout << endl;

  } else {
    cout << q.top() << endl;
  }

  return 0;
}
