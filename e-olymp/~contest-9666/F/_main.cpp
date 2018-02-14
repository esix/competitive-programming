#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <list>
#include <sstream>
#include <algorithm>
#include <set>

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


typedef triple<int, int, int> III;
typedef vector<int> V;


struct SLICE {
  V* v;
  int start;
  int len;

  int operator[](int index) const {
    return (*v)[start+index];
  }
};

inline bool operator<(const SLICE& s1, const SLICE& s2) { 
  if (s1.start < s2.start) return true;
  if (s1.start > s2.start) return false;
  if (s1.len < s2.len) return true;
  if (s1.len > s2.len) return false;
  return false;
}


SLICE make_slice(V* v, int start, int len) {
  SLICE slice;
  slice.v = v;
  slice.start = start;
  slice.len = len;
  return slice;
}

typedef list<SLICE> LOS;


set<SLICE> result;


III lcs_(const SLICE& s1, const SLICE& s2, int n1, int n2) {
  if (n1 == 0 || n2 == 0) {
    return make_triple(s1[n1] == s2[n2] ? 1 : 0, n1, n2);
  }
  if (s1[n1] == s2[n2]) {
    III res = lcs_(s1, s2, n1-1, n2-1);
    res.first++;
    if (res.first == 1) {
      res.second = n1;
      res.third = n2;
    }
    return res;
  }
  return max(lcs_(s1, s2, n1-1, n2), lcs_(s1, s2, n1, n2-1));
}


III lcs(SLICE s1, SLICE s2) {
  return lcs_(s1, s2, s1.len-1, s2.len-1);
}

// split slice and return 3 parts
triple<SLICE, SLICE, SLICE> split_slice(SLICE& s, int lcs_start, int lcs_len) {
  SLICE startn = make_slice(s.v, s.start + 0, lcs_start);
  SLICE middle = make_slice(s.v, s.start + lcs_start, lcs_len);
  SLICE ending = make_slice(s.v, s.start + lcs_start + lcs_len, s.len - lcs_len - lcs_start);

  return make_triple(startn, middle, ending);
}


void step(LOS& ss1, LOS& ss2) {
  III best_iii = make_triple(-1, -1, -1);
  LOS::iterator best_it1, best_it2;
  
  for (LOS::iterator it1 = ss1.begin(); it1 != ss1.end(); ++it1) {
    for (LOS::iterator it2 = ss2.begin(); it2 != ss2.end(); ++it2) {
      III iii = lcs(*it1, *it2);
      if (iii > best_iii) {
        best_iii = iii;
        best_it1 = it1;
        best_it2 = it2;
      }
    }
  }

  triple<SLICE, SLICE, SLICE> t1 = split_slice(*best_it1, best_iii.second, best_iii.first);
  ss1.erase(best_it1);
  if (t1.first.len) ss1.push_back(t1.first);
  if (t1.third.len) ss1.push_back(t1.third);

  triple<SLICE, SLICE, SLICE> t2 = split_slice(*best_it2, best_iii.third, best_iii.first);
  ss2.erase(best_it2);
  if (t2.first.len) ss2.push_back(t2.first);
  if (t2.third.len) ss2.push_back(t2.third);

  result.insert(t1.second);
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  V v1(n);
  for (int i = 0; i < n; i++) cin >> v1[i];

  V v2 = v1;
  sort(v2.begin(), v2.end());

  SLICE s1 = make_slice(&v1, 0, v1.size());
  SLICE s2 = make_slice(&v2, 0, v2.size());

  LOS ss1; ss1.push_back(s1);
  LOS ss2; ss2.push_back(s2);

  while (ss1.size()) {
    step(ss1, ss2);
  }

  cout << result.size() << '\n';
  for(set<SLICE>::iterator it = result.begin(); it != result.end(); ++it) {
    cout << it->len << ' ';
  }
  cout << '\n';
  return 0;
}
