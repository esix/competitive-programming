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

  int a, b;
  while (cin >> a >> b) {
    int A = a, B = b, steps = 0;
    //cout << "----------------------------------" << endl;
    //cout << A << " " << B << endl;
    

    while (true) {

      if (A == 0 || B == 0) {
        cout << steps << '\n';
        break;
      }
      steps++;
      if (A < B) {
        B -= A;
        A <<= 1;
      } else {
        A -= B;
        B <<= 1;
      }

      //cout << A << " " << B << endl;

      if ((A == a && B == b) || (A == b && B == a) || steps > 1000) {
        cout << "-1\n";
        break;
      }
    }
  }

  return 0;
}
