#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>


using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector< vector<int> > field(101, vector<int>(101));

  int n;
  cin >> n;

  int result = 0;

  for (int i = 0; i < n; i++) {
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;
    if (x0 > x1) swap(x0, x1);
    if (y0 > y1) swap(y0, y1);
    for (int x = x0; x < x1; x++)
      for (int y = y0; y < y1; y++)
        result = max(result, ++field[x+50][y+50]);
  }

  cout << result << endl;

  return 0;
}
