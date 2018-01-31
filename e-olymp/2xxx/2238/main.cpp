#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <functional>
#include <numeric>


using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  
  vector<int> vs(n);
  for (int i = 0; i < n; i++) cin >> vs[i];

  int sum = std::accumulate(vs.begin(), vs.end(), 0);
  float mid = float(sum) / n;

  int result = 0;  
  for (int i = 0; i < n; i++) if (vs[i] > mid) result++;

  cout << result << endl;

  return 0;
}
