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

  int n;
  cin >> n;

  vector<int> result(n);

  int prev;
  cin >> prev;
  result[0] = prev;

  int max_steps = 0;

  bool accumulating = false;
  int j, i;


  for(i = 1; i < n; i++) {
    int c;
    cin >> c;
    result[i] = c;

    if(c != prev) {
      if(!accumulating) {
        accumulating = true;
        j = i;
      }
    } else {   // c == prev
      if(accumulating) {
        int len = i - 1 - j;
        int steps = (len + 1) / 2;
        if(steps > max_steps) max_steps = steps;
        accumulating = false;
        int a = 1 - result[j];
        int b = 1 - result[j + len - 1];

        for(int k = 0; k < len; k++) {
          if(k<len/2){
            result[j + k] = a;
          } else {
            result[j+k] = b;
          }
        }
      }
    }
    prev = c;
  }

  if(accumulating) {
    int len = i - 1 - j;
    int steps = (len + 1) / 2;
    if(steps > max_steps) max_steps = steps;
    accumulating = false;
    int a = 1 - result[j];
    int b = 1 - result[j + len - 1];

    for(int k = 0; k < len; k++) {
      if(k<len/2){
        result[j + k] = a;
      } else {
        result[j+k] = b;
      }
    }
  }

  cout << max_steps << endl;
  for(i = 0; i < n; i++)
    cout << result[i] << " ";
  return 0;
}
