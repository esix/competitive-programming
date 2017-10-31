
#include <iostream>
#include <math.h>

using namespace std;

#define PI (3.141592653589793)

int main() {
  ios::sync_with_stdio(false);
  cout.precision(9);
  int T;
  cin >> T;

  for(int t = 1; t <= T; t++) {
    cout << "Case " << t << ":\n";

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int M;
    cin >> M;

    for(int i = 0; i < M; i++) {
      int x, y;
      cin >> x >> y;
      bool answer = x1 <= x && x <= x2 && y1 <= y && y <= y2;
      cout << (answer ? "Yes" : "No") << "\n";
    }
  }

  return 0;
}
