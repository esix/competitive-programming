#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  string s;
  getline(cin, s);

  int M = 0;

  vector<short> a(m);

  for(int i = 0; i < n; i++) {
    getline(cin, s);
    vector<short> b(m);
    stack< pair<short, short> > st;

    for(int j = 0; j < m; j++) {
      char v = s[j];
      short c = 0, k;
      if(v == '1') {
        c = b[j] = a[j] + 1;
      }

      short first_j = j;

      while(!st.empty() && st.top().second > c) {
        int sq = st.top().second * (j - st.top().first);

        if(sq > M) {
          M = sq;
        }
        first_j = st.top().first;

        st.pop();
      }

      if((c != 0) && (st.empty() || st.top().second < c)) {
        st.push(make_pair(first_j, c));
      }
    }

    while(!st.empty()) {
      int sq = st.top().second * (m - st.top().first);
      if(sq > M) M = sq;
      st.pop();
    }


    a = b;
  }

  cout << M;

  return 0;
}
