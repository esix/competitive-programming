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

  while (true) {
    int M, N;
    cin >> M >> N;
    if (M == 0 || N == 0) break;
    const int SIZE = M * N - 1;

    int r = 0;
    int index = 0;

    vector<int> tree(M * N);

    for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++) {
        int tile;
        cin >> tile;
        if (tile != 0) {

          // request tree
          int lesser_count = 0;
          for(int x = tile - 1; x > 0; x -= x&-x) {
            lesser_count += tree[x];
          }

          for(int x = tile; x <= SIZE; x += x&-x) {
            tree[x]++;
          }

          int higher_count = index - lesser_count;
          r += higher_count;
          index++;
        } else {
          if (N % 2 == 1) {     // vertical movement change EVEN invariant
            r = 0;
          } else {            
            r += (M - (i + 1)) % 2;
          }
        }
      }
    }


    if (r % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
  }
  
  return 0;
}
