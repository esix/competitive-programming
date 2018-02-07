#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int b, k, cd, cp;

vector< pair<int, int> > ds;
vector< pair<int, int> > ps;

vector< int > d_partial;
vector< int > p_partial;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> b >> k >> cd >> cp;
  ds.resize(cd); 
  for (int i = 0; i < cd; i++) cin >> ds[i].first;
  for (int i = 0; i < cd; i++) ds[i].second = i + 1;
  
  ps.resize(cp); 
  for (int i = 0; i < cp; i++) cin >> ps[i].first;
  for (int i = 0; i < cp; i++) ps[i].second = i + 1;
  
  std::sort(ds.begin(), ds.end(), std::greater<pair<int, int> >());
  std::sort(ps.begin(), ps.end(), std::greater<pair<int, int> >());

  int summ;

  d_partial.resize(cd+1);
  d_partial[0] = summ = 0;
  for (int i = 1; i <= cd; i++) d_partial[i] = (summ += ds[i-1].first);

  p_partial.resize(cp+1);
  p_partial[0] = summ = 0;
  for (int i = 1; i <= cp; i++) p_partial[i] = (summ += ps[i-1].first);

  long long max_r = -1;
  long long max_n = 0;
  long long max_m = 0;

  for(int n = min(cd, k); n >= 0; n--) {
    int m = min(cp, k - n);
    long long d = d_partial[n];
    long long p = p_partial[m];
    long long r = (b + d)*(100+p);
    if (r > max_r) {
      max_r = r;
      max_m = m;
      max_n = n;
    }

    //cout << "Semires: " << r << " with " << n << " " << m << endl;
  }

  cout << max_n << ' ' << max_m << '\n';
  for(int i = 0; i < max_n; i++) {
    cout << ds[i].second << ' ';
  }
  cout << '\n';
  for(int i = 0; i < max_m; i++) {
    cout << ps[i].second << ' ';
  }
  cout << '\n';


  return 0;
}
