#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>


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
    int n, m;
    cin >> n;
    if(!cin || n == 0) break;
    cin >> m;

    vector< triple<int, int, int> > e;
    int a, b, cost;

    for(int i = 0; i < m; i++) {
      int s, n, k;
      string o;
      cin >> s >> n >> o >> k;

      a = s; b = s + n + 1; cost = k - 1;
      if(o == "gt") {
        a = s + n + 1; b = s; cost = -k - 1;
      }

      e.push_back(make_triple(a, b, cost));
    }

    for(int i = 1; i <= n+1; i++) {
      e.push_back(make_triple(0, i, 0));
    }

    const int INF = 2147383647;
    vector<int> d(n + 2, INF);
    d[0] = 0;

    bool modified;
    for (int i=0; i<=n+1; ++i) {
      modified = false;
      for (int j=0; j<e.size(); ++j) {
        e[j].populate(a, b, cost);
        if (d[a] < INF && d[a] + cost < d[b]) {
          d[b] = d[a] + cost;
          modified = true;
        }
      }
    }

    cout << (modified ? "successful conspiracy" : "lamentable kingdom") << endl;

  }

  return 0;
}
