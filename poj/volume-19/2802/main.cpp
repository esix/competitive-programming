#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


ostream & operator <<(ostream &out, const pair<int, int> &c) {
  out << c.first << '/' << c.second;
  return out;
}

istream & operator >>(istream &in,  pair<int, int> &fraction) {
  int n, d; char s;
  in >> fraction.first >> s >> fraction.second;
  return in;
}

pair<int, int> operator*(const pair<int, int> &a, const pair<int, int> &b) {
  return make_pair(a.first * b.first, a.second * b.second);
}

pair<int, int> operator-(int a, const pair<int, int> &b) {
  return make_pair(a * b.second - b.first, b.second);
}

pair<int, int> operator+(const pair<int, int> &a, const pair<int, int> &b) {
  return make_pair(a.first * b.second + a.second * b.first, a.second * b.second);
}

bool non_zero(const pair<int, int> &a) {
  return a.first != 0;
}

const int A = 0;
const int B = 1;
const int C = 2;
const int D = 3;
const int E = 4;


class State {
public:
  pair<int, int> p;
  int num_paths;
  State() : p(make_pair(0, 1)), num_paths(1) {};

  void init_with_expr(const State &a_state, const pair<int, int> &a_multiplier, 
                      const State &b_state, const pair<int, int> &b_multiplier) {
    pair<int, int> a = a_state.p * a_multiplier;
    pair<int, int> b = b_state.p * b_multiplier;
    p = a + b;
    num_paths = 0;
    if (non_zero(a)) num_paths += a_state.num_paths;
    if (non_zero(b)) num_paths += b_state.num_paths;
  }

  void init_with_state(const State & a_state, const pair<int, int> &a_multiplier) {
    p = a_state.p * a_multiplier;
    num_paths = 0;
    if (non_zero(p)) num_paths = a_state.num_paths;
  }
};

ostream & operator <<(ostream &out, const State &c) {
  out << c.p << '(' << c.num_paths << ')';
  return out;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    State v[5][5][5];

    for (int i = 0; i < 5; i++) {
      v[0][i][i].p = make_pair(1, 1);
      v[0][i][i].num_paths = 1;
    }

    for (int r = 1; r <= 4; r++) {
      pair<int, int> ar, br, cr, dr, er;
      cin >> ar >> br >> cr >> dr;

      if (r % 2 == 1) {
        cin >> er;
      }

      for (int l = 0; l < 5; l++) {
        State *prev = v[r-1][l];
        State *current = v[r][l];

        if (r % 2 == 1) {
          current[A].init_with_expr(prev[A], ar, prev[B], 1 - br);
          current[B].init_with_expr(prev[B], br, prev[C], 1 - cr);
          current[C].init_with_expr(prev[C], cr, prev[D], 1 - dr);
          current[D].init_with_expr(prev[D], dr, prev[E], 1 - er);

        } else {
          current[A].init_with_state(prev[A], 1 - ar);
          current[B].init_with_expr(prev[A], ar, prev[B], 1 - br);
          current[C].init_with_expr(prev[B], br, prev[C], 1 - cr);
          current[D].init_with_expr(prev[C], cr, prev[D], 1 - dr);
          current[E].init_with_state(prev[D], dr);
        }
      }

      // int l = C;
      // cout << " Prev: " << v[r - 1][l][A] << ' ' << v[r - 1][l][B] << ' ' << v[r - 1][l][C] << ' ' << v[r - 1][l][D] << ' ' << v[r - 1][l][E] << endl;
      // cout << "   Op: " << ar << ' ' << br << ' ' << cr << ' ' << dr << ' ' << er << endl;
      // cout << " Curr: " << v[r][l][A] << ' ' << v[r][l][B] << ' ' << v[r][l][C] << ' ' << v[r][l][D] << ' ' << v[r][l][E] << endl;
      // cout << endl;
    }


    cout << "data set #" << t << endl;
    for (int q = 0; q < 3; q++) {
      char f, t;
      cin >> f >> t;
      const State &a = v[4][f - 'A'][t - 'A'];
      cout << f << "->" << t << ' ' << a.num_paths << " paths, " << 100 * a.p.first / a.p.second << "% chance" << endl;
    }
  }

  return 0;
}
