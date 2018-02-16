#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int test_id;
    int b;
    string d;
    cin >> test_id >> b >> d;
    int s = 0;
    for (int i = 0; i < d.size(); i++) {
      s += d[i] - '0';
    }
    cout << test_id << ' ' << (s % (b-1)) << '\n';
  }

  return 0;
}
