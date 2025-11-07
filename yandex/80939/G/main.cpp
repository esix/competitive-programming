#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct CellInfo {
  char c;
  int top_left;
  int top_right;
  int top;
  int left;
};


int main() 
{
  int n, m;
  cin >> n >> m;
  string s;
  vector<CellInfo> prev_row(m);
  vector<CellInfo> curr_row(m);

  for (int i = 0; i < n; i++) {
    cin >> s;
    for (int j = 0; j < m; j++) {
      CellInfo ci;
      ci.c = s[j];
      ci.top_left   = (j == 0     || ci.c != prev_row[j - 1].c) ? 1 : prev_row[j - 1].top_left  + 1;
      ci.top_right  = (j == m - 1 || ci.c != prev_row[j + 1].c)	? 1 : prev_row[j + 1].top_right + 1;
      ci.top        = (              ci.c != prev_row[j    ].c) ? 1 : prev_row[j    ].top       + 1;
      ci.left       = (j == 0     || ci.c != curr_row[j - 1].c) ? 1 : curr_row[j - 1].left      + 1;
      if ((ci.c == 'O' || ci.c == 'X') && (ci.top_left == 5 || ci.top == 5 || ci.top_right == 5 || ci.left == 5)) {
        cout << "Yes" << endl;
        return 0;
      }
      curr_row[j] = ci;
    }

    prev_row = curr_row;
  }
  cout << "No" << endl;

  return 0;
}

