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

  vector<int> pos;
  int t;
  cin >> t;
  while(t--) {
    int n, m;
    cin >> n >> m;
    pos.resize(n);

    int current_idx = 0;

    for (int i = 0; i < n; i++) {
      int friend_id;
      cin >> friend_id;
      friend_id--;
      pos[friend_id] = i;
      if (i == 0) current_idx = friend_id;
    }


    for (int i = 0; i < m; i++) {
      int friend_id;
      cin >> friend_id;
      friend_id--;
      cout << ((n + pos[friend_id] - pos[current_idx]) % n) << ' ';
      current_idx = friend_id;
    }
    cout << '\n';
  }


  return 0;
}
