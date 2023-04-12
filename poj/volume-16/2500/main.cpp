#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>
#include <queue>
#include <set>
#include <cmath>

using namespace std;

int n, d, c, g;
double PI = 3.14159265358979;
vector<int> ps;


map<int, double> dist_cache;

double dist_between_points(int i1, int i2) {
  int i = i2 - i1;
  map<int, double>::iterator it = dist_cache.find(i);
  if (it != dist_cache.end()) return it->second;
  
  double v = d * sin(i * PI / n);
  dist_cache.insert(make_pair(i, v));
  return v;
}

double fit(int i1, int i2, int i3, int i4) {
  double a = dist_between_points(i1, i2);
  double b = dist_between_points(i2, i3);
  double c = dist_between_points(i3, i4);
  double d = dist_between_points(i1, i4);
  double p = (a + b + c + d) / 2;
  return (p - a) * (p - b) * (p - c) * (p - d);
}

double fit_ps(int i1, int i2, int i3, int i4) {
  return fit(ps[i1], ps[i2], ps[i3], ps[i4]);
}

uint64_t encode(int i1, int i2, int i3, int i4) {
  return ((uint64_t)i1 << 48) | ((uint64_t)i2 << 32) | ((uint64_t)i3 << 16) | ((uint64_t)i4 << 00);
}

void decode(uint64_t state, int& i1, int& i2, int& i3, int& i4) {
  i1 = (state >> 48) & 0xFFFF;
  i2 = (state >> 32) & 0xFFFF;
  i3 = (state >> 16) & 0xFFFF;
  i4 = (state >> 00) & 0xFFFF;
}

double fit_state(uint64_t state) {
  int i1, i2, i3, i4;
  decode(state, i1, i2, i3, i4);
  return fit_ps(i1, i2, i3, i4);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cin >> d >> n >> c >> g;
    dist_cache.clear();

    ps.resize(c);
    for (int k = 0; k < c; k++) ps[k] = (g * k) % n;
    sort(ps.begin(), ps.end());

    queue<uint64_t> q;
    q.push(encode(0, 1, 2, 3));
    set<uint64_t> visited;
    visited.insert(q.front());

    double best_score = 0;

    while (q.size()) {
      uint64_t state = q.front();
      q.pop();

      int i1, i2, i3, i4;
      decode(state, i1, i2, i3, i4);
      double sc = fit_ps(i1, i2, i3, i4), sc2;

      best_score = max(best_score, sc);
      if (sc < best_score) continue;
      
      // cout << "Trying " << i1 << ' ' << i2 << ' ' << i3 << ' ' << i4 << " with v=" << sc << endl;

      uint64_t next_state;

      if (i4 < c - 1  && sc <= (sc2 = fit_state(next_state = encode(i1, i2, i3, i4 + 1))) && visited.find(next_state) == visited.end()) { q.push(next_state); visited.insert(next_state); }
      if (i4 > i3 + 1 && sc <= (sc2 = fit_state(next_state = encode(i1, i2, i3, i4 - 1))) && visited.find(next_state) == visited.end()) { q.push(next_state); visited.insert(next_state); }
      if (i3 < i4 - 1 && sc <= (sc2 = fit_state(next_state = encode(i1, i2, i3 + 1, i4))) && visited.find(next_state) == visited.end()) { q.push(next_state); visited.insert(next_state); }
      if (i3 > i2 + 1 && sc <= (sc2 = fit_state(next_state = encode(i1, i2, i3 - 1, i4))) && visited.find(next_state) == visited.end()) { q.push(next_state); visited.insert(next_state); }
      if (i2 < i3 - 1 && sc <= (sc2 = fit_state(next_state = encode(i1, i2 + 1, i3, i4))) && visited.find(next_state) == visited.end()) { q.push(next_state); visited.insert(next_state); }
      if (i2 > i1 + 1 && sc <= (sc2 = fit_state(next_state = encode(i1, i2 - 1, i3, i4))) && visited.find(next_state) == visited.end()) { q.push(next_state); visited.insert(next_state); }
      if (i1 < i2 - 1 && sc <= (sc2 = fit_state(next_state = encode(i1 + 1, i2, i3, i4))) && visited.find(next_state) == visited.end()) { q.push(next_state); visited.insert(next_state); }
      if (i1 > 0      && sc <= (sc2 = fit_state(next_state = encode(i1 - 1, i2, i3, i4))) && visited.find(next_state) == visited.end()) { q.push(next_state); visited.insert(next_state); }

    }

    cout << "Scenario #" << t << ":\n" << fixed << setprecision(6) << sqrt(best_score) << endl << endl;

    // for (int i1 = 0     ; i1 < c - 3; i1++)
    // for (int i2 = i1 + 1; i2 < c - 2; i2++)
    // for (int i3 = i2 + 1; i3 < c - 1; i3++)
    // for (int i4 = i3 + 1; i4 < c - 0; i4++) {
    //   cout << "TEST " << i1 << ' ' << i2 << ' ' << i3 << ' ' << i4 << " with v=" << sqrt(fit_ps(i1, i2, i3, i4)) << endl;
    // }
  }

  return 0;
}
