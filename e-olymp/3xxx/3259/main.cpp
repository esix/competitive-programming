#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);


  int A005179[] = {0, 1, 2, 4, 6, 16, 12, 64, 24, 36, 48, 1024, 60, 4096, 192, 144, 120};
  int n;
  cin >> n;
  cout << A005179[n] << endl;

  return 0;
}
