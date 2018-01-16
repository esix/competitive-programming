#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;


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


typedef triple<int, int, int> point_t;


int l, r, c;


bool is_valid(int z, int y, int x) {
  return (0 <= z && z < l &&
          0 <= y && y < r &&
          0 <= x && x < c);
}




int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    cin >> l >> r >> c;

    if (l == 0 && r == 0 && c == 0) break;

    point_t start, end;

    vector< vector<string> > level(l, vector<string>(r));
    string s;

    for (int z = 0; z < l; z++) {
      for (int y = 0; y < r; y++) {
        cin >> s;
        int s_pos, e_pos;
        if ((s_pos = s.find('S')) != string::npos) start = make_triple(z, y, s_pos);
        if ((e_pos = s.find('E')) != string::npos) end = make_triple(z, y, e_pos);
        level[z][y] = s;
      }
    }
    vector< vector< vector<int> > > dist(l, vector< vector<int> >(r, vector<int>(c, -1)) );
    queue< point_t > q;
    q.push(start);
    dist[start.first][start.second][start.third] = 0;

    while (!q.empty()) {
      point_t p = q.front();
      q.pop();

      if (p == end) break;

      int z = p.first, y = p.second, x = p.third, d = dist[z][y][x];
      
      int zz, yy, xx;

      zz = z-1; yy = y; xx = x; if (is_valid(zz,yy,xx) && level[zz][yy][xx] != '#' && dist[zz][yy][xx] == -1) { q.push(make_triple(zz, yy, xx)); dist[zz][yy][xx] = d + 1; }
      zz = z+1; yy = y; xx = x; if (is_valid(zz,yy,xx) && level[zz][yy][xx] != '#' && dist[zz][yy][xx] == -1) { q.push(make_triple(zz, yy, xx)); dist[zz][yy][xx] = d + 1; }
      zz = z; yy = y-1; xx = x; if (is_valid(zz,yy,xx) && level[zz][yy][xx] != '#' && dist[zz][yy][xx] == -1) { q.push(make_triple(zz, yy, xx)); dist[zz][yy][xx] = d + 1; }
      zz = z; yy = y+1; xx = x; if (is_valid(zz,yy,xx) && level[zz][yy][xx] != '#' && dist[zz][yy][xx] == -1) { q.push(make_triple(zz, yy, xx)); dist[zz][yy][xx] = d + 1; }
      zz = z; yy = y; xx = x-1; if (is_valid(zz,yy,xx) && level[zz][yy][xx] != '#' && dist[zz][yy][xx] == -1) { q.push(make_triple(zz, yy, xx)); dist[zz][yy][xx] = d + 1; }
      zz = z; yy = y; xx = x+1; if (is_valid(zz,yy,xx) && level[zz][yy][xx] != '#' && dist[zz][yy][xx] == -1) { q.push(make_triple(zz, yy, xx)); dist[zz][yy][xx] = d + 1; }
    }

    int result = dist[end.first][end.second][end.third];
    if (result == -1) {
      cout << "Trapped!\n";
    } else {
      cout << "Escaped in " << result << " minute(s).\n";
    }
  }


  return 0;
}
