#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  float summ = 0, a;
  int positives = 0;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a > 0) {
      summ += a;
      positives++;
    }
  }

  if (positives > 0) {
    cout << std::fixed << setprecision(2) << (summ / positives) << endl;
  } else {
    cout << "Not Found" << endl;
  }

  return 0;
}
