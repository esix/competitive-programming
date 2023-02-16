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

  int N, n, k;
  cin >> N;

  for (int I = 0; I < N; I++) {
    cin >> n >> k;

    if (n > k) {
      cout << 0 << endl;
      continue;
    }

    vector<int> digits;
    digits.push_back(k);

    int c = 0;
    bool solved = false;

    for (int i = 0; i < 100; i++) {
      int r = (digits[i] * n + c) % 10;
      c = (digits[i] * n + c) / 10;

      if (r == k && c == 0) {
        solved = true;
        break;
      }

      digits.push_back(r);
    }

    std::reverse(digits.begin(), digits.end());


    if (solved) {
      for (int i = 0; i < digits.size(); i++) cout << digits[i]; 
      cout << endl;
    } else {
      cout << 0 << endl;
    }
  }
  

  return 0;
}
