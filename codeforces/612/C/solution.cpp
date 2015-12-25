#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  char b;

  stack<char> s;
  int res = 0;

  while (cin.get(b)) {
    if(b == '<' || b == '{' || b == '[' || b == '(' ){
      s.push(b);
    } else if(b == '>' || b == '}' || b == ']' || b == ')') {
      if(s.empty()) {
        cout << "Impossible" << endl;
        return 0;
      }
      char c;
      switch(b) {
        case '>': c = '<'; break;
        case '}': c = '{'; break;
        case ']': c = '['; break;
        case ')': c = '('; break;
      }

      if(s.top() != c) res++;
      s.pop();
      
    } else {
      break;
    }
  }

  if(!s.empty()) {
    cout << "Impossible" << endl;
    return 0;
  }


  cout << res << endl;

  return 0;
}
