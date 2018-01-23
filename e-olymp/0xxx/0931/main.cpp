#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;


long long mul = 1, sum = 0;


void parse (long long n) {
  long long d = n % 10L;
  mul *= d;
  sum += d;
  long long temp = n / 10L;  
  if (temp == 0 ) return;
  parse (temp);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long long n;
  cin >> n;
  parse (n);
  
  cout << fixed << setprecision(3) << ((double)mul / sum) << endl;

  return 0;
}
