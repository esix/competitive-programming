#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <string.h>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  char s[10001];
  cin.getline(s, 10001);

  char buf[10001*2];


  int n = strlen(s);

  int Q;
  cin >> Q;
  for(int q = 0; q < Q; q++) {
    int start, end, k;
    cin >> start >> end >> k;
    start--;
    end--;
    int l = end - start + 1;
    k %= l;
    if(k == 0) continue;
    memcpy(buf, s + start, l);
    memcpy(buf + l, s + start, l);

    memcpy(s + start, buf + l - k, l);
  }
  cout << s << endl;

  return 0;
}
