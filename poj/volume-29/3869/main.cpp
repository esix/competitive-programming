#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


int solve(string& s) {
  if (s.length() == 1) {
    return 0;
  }


  char c0 = s[s.length() - 1], c1 = s[0];
  int n00 = +(c0 == '0' && c1 == '0'), 
      n01 = +(c0 == '0' && c1 == '1'), 
      n0 = +(c1 == '0'), 
      n1 = +(c1 == '1');

  for (int i = 1; i < s.length(); i++) {
    c0 = s[i - 1];
    c1 = s[i];
    n00 += +(c0 == '0' && c1 == '0');
    n01 += +(c0 == '0' && c1 == '1'); 
    n0 += +(c1 == '0'); 
    n1 += +(c1 == '1');
  }

  // n00 / (n00 + n01)
  // n0 / (n0 + n1)

  int n_now = n00 * (n0 + n1);
  int n_any = n0 * (n00 + n01);

  if (n_now > n_any) return 1;
  else if (n_now < n_any) return -1;
  else return 0;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  int i = 1;
  getline(cin, s);

  int r = solve(s);

  if (r == -1) {
    cout << "ROTATE" << endl;
  } else if (r == 0) {
    cout << "EQUAL" << endl;
  } else {
    cout << "SHOOT" << endl;
  }    

  return 0;
}
