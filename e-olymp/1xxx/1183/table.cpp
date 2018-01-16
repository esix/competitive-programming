#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;


int solve(int a, int b) {
  int A = a, B = b, steps = 0;

  while (true) {
    if (A == 0 || B == 0) {
      return steps;
    }

    steps++;
    if (A < B) {
      B -= A;
      A <<= 1;
    } else {
      A -= B;
      B <<= 1;
    }

    if ((A == a && B == b) || (A == b && B == a) || steps > 1000) {
      return -1;
    }
  }
}

const int SIZE = 34;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cout << std::setw(3) << ' ' << ':';
  for (int b = 1; b <= SIZE; b++) {
    cout << setw(4) << b;
  }
  cout << endl;

  cout << " ~~~";
  for (int b = 1; b <= SIZE; b++) {
    cout << "~~~~";
  }
  cout << endl;
  

  for (int a = 1; a < SIZE; a++) {
    cout << std::setw(3) << a << ':';
    for (int b = 1; b <= SIZE; b++) {
      int solution = solve(a, b);
      if (solution == -1) {
        cout << setw(4) << '.';
      } else {
        cout << setw(4) << solution;
      }
    }
    cout << endl;
  }
  return 0;
}
