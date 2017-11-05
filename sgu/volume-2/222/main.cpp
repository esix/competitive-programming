#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int solve(int w, int h, int k) {    // solve for board w*h, k rooks
  if (k > w || k > h) return 0;

  if (k == 0) return 1;

  if (k == 1) return w * h;
  
  int result = 0;
  for (int x = 1; x <= w; x++) {
    result += h * solve(w-x, h-1, k-1);
  }
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;

  cin >> n >> k;

  cout << solve(n, n, k) << endl;

  return 0;
}
