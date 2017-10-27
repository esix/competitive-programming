#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int ts[21];        // tracks length
int t_count;

int get_length(int tracks_idx) {
  int result = 0;
  for(int i = 0, mask = 1; i < t_count; i++, mask = mask << 1) {
    if (tracks_idx & mask) {
      result += ts[i];
    }
  }
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, t;
  cin >> n >> t_count;
  for(int i = 0; i < t_count; i++) cin >> ts[i];

  int max_iter = 0;
  for(int i = 0, mask = 1; i < t_count; i++, mask = mask << 1) {
    max_iter |= mask;
  }
  // max_iter = 2^t_count (<= 2^20)

  int best = 0;

  for (int i = 1; i <= max_iter; i++) {             // iterate each subset
    int length = get_length(i);
    if (best < length && length <= n) {
      best = length;
    }
  }
  
  cout << best;

  return 0;
}
