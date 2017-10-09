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

  vector< pair<int, int> > athlets(n);
  
  for (int i = 0; i < n; i++) {
    // m, s
    cin >> athlets[i].first >> athlets[i].second;
  }

  sort(athlets.begin(), athlets.end());

  




  for (vector< pair<int, int> >::iterator it = athlets.begin(); it != athlets.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  

  return 0;
}
