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

  string a, b;
  cin >> a >> b;

  int A = a.length();
  int B = b.length();

  if (a == b) {
    cout << "0\n";
    return 0;
  }

  int ai = 0, bi = 0;

  while (true) {
    if (ai >= A) break;
    if (bi >= B) break;
    if (a[ai] != b[bi]) break;
    ai++;
    bi++;
  }

  int aj = A-1, bj = B - 1;

  while (true) {
    if (aj < ai) break;
    if (bj < bi) break;
    if (a[aj] != b[bj]) break;
    aj--;
    bj--;
  }


  cout << (bj - bi + 1) << endl;

  return 0;
}
