#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;

int n;
string table[200];


bool is_linked(int from, int to) {
  if (from < to) {
    return table[to][from] == '-';
  } else {
    return table[from][to] == '+';
  }
}


bool lookup_path(int from, vector<int>& s) {
  s.push_back(from);

  if (s.size() == n) {      // all visited
    return true;
  }

  for(int i = 0; i < n; i++) {
    if (is_linked(from, i) && find(s.begin(), s.end(), i) == s.end()) {
      if (lookup_path(i, s)) {
        return true;        // found valid path from current point
      }
    }
  }

  s.pop_back();
  return false;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> table[i];
  }

  vector<int> s;
  for (int i = 0; i < n; i++) {
    if (lookup_path(i, s)) {
      // found result
      break;
    }
  }

  for (int i = 0; i < s.size(); i++) {
    cout << s[i] + 1 << ' ';
  }

  return 0;
}
