#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

typedef long long int_t;
#define sqr(x) ((x)*(x))

void output(stringstream &ss, int_t lo, int_t hi) {
  ss << hi - lo + 1;
  for(int_t i = lo; i <= hi; i++){
    ss << ' ' << i;
  }
  ss << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int_t n;
  cin >> n;

  stringstream ss;
  int count = 0;

  int_t s = 0, hi = 1;
  for (int_t lo = 1; true; lo++) {
    for (; s < n; hi++) s += sqr(hi);
    if (sqr(hi - 1) > n) break;
    if (s == n) {
      count ++;
      output(ss, lo, hi - 1);
    }
    s -= sqr(lo);
  }

  cout << count << endl << ss.str();
  return 0;
}
