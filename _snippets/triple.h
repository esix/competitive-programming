// in case std::tuple not defined (C++11)
// and necassary three values

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
