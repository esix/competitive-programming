#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;


int cnt = 0;
int a;


void parse (long long n) {
  long long d = n % 10L;
  if (a == d) cnt++;
  long long temp = n / 10L;  
  if (temp == 0 ) return;
  parse (temp);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long long n;
  cin >> n >> a;
  parse (abs(n));
  
  cout << cnt << endl;

  return 0;
}
