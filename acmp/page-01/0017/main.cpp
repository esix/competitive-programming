#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))


int solve(const vector<int>& a) {
  int len = a.size();

  for(int result = 1; result < len; result++) {
    if(len % result != 0) {
      continue;
    }

    int n = len / result;

    for(int j = 0; j < n; j++) {
      for(int k = 0; k < result; k++) {
        if(a[j*result + k] != a[k])
          goto outer;
      }
    }

    return result;

    outer:
    {}
  }
  return a.size();
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, i;
  cin >> N;
  N--;

  vector<int> a(N);

  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  cout << solve(a) << endl;

  return 0;
}
