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
  for(int t = 1; t <= T; t++) {
    long long int w, m = 1;
    cin >> w;
    while(w % 2 == 0) {
      m *= 2;
      w /= 2;
    }
    cout << "Case " << t << ": ";
    if(m == 1) {
      cout << "Impossible" << endl;
    } else {
       cout << w << " " << m << endl;
    }
  }

  return 0;
}
