#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector< pair<int, int> > xs(n);
  for(int i = 0; i < n; i++) cin >> xs[i].first;
  for(int i = 0; i < n; i++) cin >> xs[i].second;

  sort(xs.begin(), xs.end());

  vector<int> count_by_d(201);
  for(int i = 0; i < n; i++) {
    count_by_d[xs[i].second] ++;
  }


  int energy_for_higher = 0;
  int best_energy = 1000000000;

  for(int i = n-1; i >= 0; ) {
    int l = xs[i].first;
    int num = 0, e = 0;
    while(i >= 0 && xs[i].first == l) {
      num++;
      e += xs[i].second;
      count_by_d[xs[i].second]--;
      i--;
    }

    int energy_for_lower = 0;

    int num_of_lower_legs = i + 1;
    for(int d = 1; d < 201; d++) {
      int cnt = count_by_d[d];
      if(num > num_of_lower_legs - cnt) {
        cnt = max(0, num_of_lower_legs - num + 1);
        energy_for_lower += cnt * d;
        break;
      }
      energy_for_lower += d * cnt;
      num_of_lower_legs -= cnt;
    }

    int energy = energy_for_lower + energy_for_higher;

    if(best_energy > energy) best_energy = energy;

    energy_for_higher += e;
  }
  cout << best_energy << endl;

  return 0;
}
