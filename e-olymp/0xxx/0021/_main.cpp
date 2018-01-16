#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, p;
  cin >> n >> p;
  
  multiset<double> x;

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    x.insert(v);
  }

  while (x.size() > 1) {
    multiset<double>::iterator i = x.begin(), j = x.begin();
    ++j;
    double newVal = (*i + *j) * (100 - p) / 100;
    x.erase(x.begin());
    x.erase(x.begin());
    x.insert(newVal);
  }

  cout << *x.begin() << endl;

  return 0;
}
