#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


typedef unsigned long long INT;


bool solve_long(INT a, INT b, INT c, INT d) {
  while (true) {
    if (a == c && b == d) {
      return true;
    }
    // 2
    if (b == 0LL) return false;
    // 3
    if (b > a) {
      swap(a, b);
    }
    // 4
    a -= b;
  }
}




bool solve(INT a, INT b, INT c, INT d) {
  // cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
  // cout << "-----------------------------------" << endl;

  while (true) {
    // cout << a << "\t" << b << endl;
    if (a == c && b == d) {
      return true;
    }

    // 2
    if (b == 0LL) break;
    // 3
    if (b > a) {
      swap(a, b);
    }
    // 4

    if (b == 0LL) {
      if (a == c && b == d) {
        return true;
      }
      return false;
    }
    
    if (b == d && (c < a) && (a % b == c % b)) {
      return true;
    }

    //a -= b;
    a %= b;
  }

  return false;
}



void run_tests() {
  for(INT a = 1; a < 100; a++) {
    for(INT b = 1; b < 100; b++) {
      for(INT c = 1; c < 100; c++) {
        for(INT d = 1; d < 100; d++) {
          if (solve(a, b, c, d) != solve_long(a, b, c, d)) {
            cout << "FAILED to solve: " << a << " " << b << " " << c << " " << d << "\n";
          }
        }
      }
    }
  }
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  //run_tests();

  int k;
  cin >> k;

  for (int i = 0; i < k; i++) {
    INT a, b, c, d;
    cin >> a >> b >> c >> d;

    bool result = solve(a, b, c, d);

    if (result) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }

    // result = solve_long(a, b, c, d);
    // if (result) {
    //   cout << "YES\n";
    // } else {
    //   cout << "NO\n";
    // }
  }


  return 0;
}
