#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  char line[100];
  set<int> s;

  while (cin.getline(line, 100)) {
    if (line[0] == 'i') {    // insert
      int n = stoi(line + 7);
      s.insert(n);
    } else if (line[0] == 'e') { // exists
      int n = stoi(line + 7);
      set<int>::iterator it = s.find(n);
      if (it != s.end()) {
        cout << "true\n";
      } else {
        cout << "false\n";
      }
    } else if (line[0] == 'd') {
      int n = stoi(line + 7);
      set<int>::iterator it = s.find(n);
      if (it != s.end()) {
        s.erase(it);
      }
    }
  }

  return 0;
}
