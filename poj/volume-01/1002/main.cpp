#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <iomanip>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  string s;
  getline(cin, s);
  map<int, int> counts;

  for (int i = 0; i < n; i++) {
      getline(cin, s);
      int phone = 0;
      for (int k = 0; k < s.size(); k++) {
          char c = s[k];
          if ('0' <= c && c <= '9') c = c - '0';
          else if (c == 'A' || c == 'B' || c == 'C') c = 2;
          else if (c == 'D' || c == 'E' || c == 'F') c = 3;
          else if (c == 'G' || c == 'H' || c == 'I') c = 4;
          else if (c == 'J' || c == 'K' || c == 'L') c = 5;
          else if (c == 'M' || c == 'N' || c == 'O') c = 6;
          else if (c == 'P' || c == 'R' || c == 'S') c = 7;
          else if (c == 'T' || c == 'U' || c == 'V') c = 8;
          else if (c == 'W' || c == 'X' || c == 'Y') c = 9;
          else continue;
          phone = 10 * phone + c;
      }
      counts[phone] = counts[phone] + 1;
  }

  bool found = false;
  for (const auto& pair : counts) {
      if (pair.second > 1) {
          found = true;
          int left = pair.first / 10000;      // 487
          int right  = pair.first % 10000;      // 3279
          std::cout << setw(3) << setfill('0') << left << '-'  <<
                       setw(4) << setfill('0') << right << ' ' <<
                       pair.second << '\n';
      }
  }
  if (!found) {
      cout << "No duplicates." << endl;
  }
  return 0;
}
