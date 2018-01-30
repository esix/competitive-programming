#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

struct Vegetable {
  double weight;
  int parts;

  Vegetable(double weight, int parts) : weight(weight), parts(parts) {
    //
  }

  double value() const {
    return weight / parts;
  }
};

struct comparator {
  bool operator()(const Vegetable& a, const Vegetable& b) const {
    return b.value() < a.value();
  }
};

// sorted
typedef multiset<Vegetable, comparator> Vegetables;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  double t;
  int n;
  cin >> t >> n;

  vector<double> ws(n);
  for (int i = 0; i < n; i++) cin >> ws[i];

  double min_w = ws[0];
  for (int i = 0; i < n; i++) min_w = min(min_w, ws[i]);

  Vegetables vegetables;
  for (int i = 0; i < n; i++) vegetables.insert(Vegetable(ws[i], 1));

  int result = 0;

  while (true) {
    Vegetables::iterator it = vegetables.begin();
    Vegetable v = *it;
    vegetables.erase(it);

    if (min_w / v.value() >= t) break;
    result++;
    v.parts++;
    min_w = min(min_w, v.value());

    vegetables.insert(v);
  }

  cout << result << '\n';
  
  return 0;
}
