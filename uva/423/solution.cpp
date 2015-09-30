#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <stdlib.h>


namespace std {
template<class _T1, class _T2, class _T3>
struct triple {
  typedef _T1 first_type;
  typedef _T2 second_type;
  typedef _T3 third_type;

  _T1 first;
  _T2 second;
  _T3 third;

  triple(): first(), second(), third() { }
  triple(const _T1& __a, const _T2& __b, const _T3& __c) : first(__a), second(__b), third(__c) { }
  template<class _U1, class _U2, class _U3>
  triple(const triple<_U1, _U2, _U3>& __p): first(__p.first), second(__p.second), third(__p.third) { }

  inline void populate(_T1& __a, _T2& __b, _T3& __c) { __a = first; __b = second; __c = third; }
};

template<class _T1, class _T2, class _T3>
inline bool operator==(const triple<_T1, _T2, _T3>& __x, const triple<_T1, _T2, _T3>& __y)
{ return __x.first == __y.first && __x.second == __y.second && __x.third == __y.third; }

template<class _T1, class _T2, class _T3>
inline bool operator<(const triple<_T1, _T2, _T3>& __x, const triple<_T1, _T2, _T3>& __y)
{ return __x.first < __y.first || (!(__y.first < __x.first) && __x.second < __y.second) || (!(__y.first < __x.first) && !(__y.second < __x.second) && __x.third < __y.third); }

template<class _T1, class _T2, class _T3>
inline bool operator!=(const triple<_T1, _T2, _T3>& __x, const triple<_T1, _T2, _T3>& __y)
{ return !(__x == __y); }

template<class _T1, class _T2, class _T3>
inline bool operator>(const triple<_T1, _T2, _T3>& __x, const triple<_T1, _T2, _T3>& __y)
{ return __y < __x; }

template<class _T1, class _T2, class _T3>
inline bool
operator<=(const triple<_T1, _T2, _T3>& __x, const triple<_T1, _T2, _T3>& __y)
{ return !(__y < __x); }


template<class _T1, class _T2, class _T3>
inline bool
operator>=(const triple<_T1, _T2, _T3>& __x, const triple<_T1, _T2, _T3>& __y)
{ return !(__x < __y); }

template<class _T1, class _T2, class _T3>
inline triple<_T1, _T2, _T3> make_triple(_T1 __x, _T2 __y, _T3 __z)
{ return triple<_T1, _T2, _T3>(__x, __y, __z); }

}// namespace std

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);


  while(cin) {
    int n;
    cin >> n;
    if(!cin) break;
    vector< triple<int, int, int> > e;

    for(int i = 1; i < n; i++) {
      for(int j = 0; j < i; j++) {
        string s;
        cin >> s;
        if(s != "x") {
          stringstream ss;
          ss << s;
          int value;
          ss >> value;
          e.push_back(make_triple(i, j, value));
          e.push_back(make_triple(j, i, value));
        }
      }
    }

    const int INF = 2147383647;
    vector<int> d(n, INF);
    d[0] = 0;
    int a, b, cost;

    bool modified = true;
    while(modified) {
      modified = false;
      for (int j=0; j<e.size(); ++j) {
        e[j].populate(a, b, cost);
        if (d[a] < INF && d[b] > d[a] + cost) {
          d[b] = d[a] + cost;
          modified = true;
        }
      }
    }

    int D = d[0];
    for(int i = 0; i < n; i++) {
      D = max(D, d[i]);
    }

    cout << D << endl;
  }

  return 0;
}
