
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

#define PI (3.141592653589793)


class Comparator {
public:
  Comparator() : ts()
  {
    for(int i = 1; i <= 1000; i++) {
      int k = i;
      while(k <= 1000) {
        ts[k]++;
        k += i;
      }
    }
  }

  bool operator()(int x, int y) {
    if(ts[x] < ts[y]) return true;
    if(ts[x] > ts[y]) return false;
    return x > y;
  }

private:
  int ts[1001];
};



int main() {
  ios::sync_with_stdio(false);
  cout.precision(9);

  int os[1001];
  for(int i = 0; i <= 1000; i++) os[i] = i;

  sort(os, os + sizeof os / sizeof os[0], Comparator());

  int T;
  cin >> T;

  for(int t = 1; t <= T; t++) {
    int n;
    cin >> n;
    cout << "Case " << t << ": " << os[n]<< endl;
  }

  return 0;
}
