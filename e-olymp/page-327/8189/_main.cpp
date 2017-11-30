#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;

typedef pair<double, double> station_t;

int n;
vector< station_t > ss;
vector<double> sqdists_cache;


inline double sqr(double a) { return a * a;}

inline double count_sqdist(const station_t& a, const station_t& b) {
  return sqr(a.first - b.first) + sqr(a.second - b.second);
}

void build_distances_cache() {
  sqdists_cache.resize(n*n);

  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      sqdists_cache[i*n+j] = sqdists_cache[j*n+i] = count_sqdist(ss[i], ss[j]);
    }
  }
}

inline double sqdist(int i, int j) {
  return sqdists_cache[i * n + j];
}


vector<int> colors;
vector<int> stations_in_color;

int colorify_(int idx, int color) {
  int result = 1;
  colors[idx] = color;
  for (int i = 0; i < n; i++) {
    if (colors[i] == 0 && sqdist(idx, i) < 4) {          // dist < 2
      result += colorify_(i, color);
    }
  }
  return result;
}


void colorify() {
  colors.resize(n);
  stations_in_color.push_back(0);

  int current_color = 1;
  for (int i = 0; i < n; i++) {
    if (colors[i] == 0) {
      stations_in_color.push_back(colorify_(i, current_color++));
    }
  }
}

vector< set<int>* > N;

void build_connection4_sets() {
  N.resize(n);
  for (int i = 0; i < n; i++) {
    set<int> *s = new set<int>();
    for (int j = 0; j < n; j++) {
      if (i != j && sqdist(i, j) <= 16) {     // dist <= 4
        s->insert(j);
      }
    }
    N[i] = s;
  }
}


set<int> sets_intersect(const set<int>& p1, const set<int>& p2) {
  set<int> result;
  for (set<int>::const_iterator it = p1.cbegin(); it != p1.cend(); ++it) {
    if (p2.find(*it) != p2.cend()) {
      result.insert(*it);
    }
  }
  return result;
}


void print_set(const string& set_name, const set<int> &s, bool must_add_one = false) {
  #ifdef _DEBUG
  cout << set_name << ": { ";
  for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
    cout << (*it + int(must_add_one)) << ' ';
  }
  cout << '}' << endl;
  #endif
}


int best_stations_count = 1;    // there might be one station

//
//  Return set of colors that are used by stations in set
//
set<int> get_colors_for_stations(const set<int>& stations) {
  set<int> used_colors;

  for (set<int>::const_iterator it = stations.cbegin(); it != stations.cend(); ++it) {
    int station_id = *it;
    int station_color = colors[station_id];
    used_colors.insert(station_color);
  }

  return used_colors;
}

//
// return total number of stations that colored with colors from set
//
int get_stations_count_for_colors(const set<int>& colors) {
  int stations_count = 0;

  for (set<int>::const_iterator it = colors.cbegin(); it != colors.cend(); ++it) {
    int color = *it;
    stations_count += stations_in_color[color];
  }
  return stations_count;
}

//
// return total number of stations that can be accessible from clique
//
int get_stations_count_for_clique(const set<int>& clique) {
  print_set("Found clique", clique, true);
  const set<int> used_colors = get_colors_for_stations(clique);
  print_set("  it uses colors", used_colors);

  int stations_count = get_stations_count_for_colors(used_colors);
  return stations_count;
}


// Bron–Kerbosch algorithm
void BronKerbosch1(set<int> R, set<int> P, set<int>X) {

  if (P.empty() && X.empty()) {                        // if not P and not X:
    int stations_count = get_stations_count_for_clique(R);
    if (stations_count > best_stations_count) {
      best_stations_count = stations_count;
    }
  }
        
  while (!P.empty()) { 
    int v = *P.begin();             // for v in P:

    set<int> R1 = R;                // R | {v}
    R1.insert(v);

    BronKerbosch1(R1, sets_intersect(P, *N[v]), sets_intersect(X, *N[v]));       // BronKerbosch1(R | {v}, P & N(v), X & N(v))

    P.erase(P.begin());                               // P = P - {v}
    X.insert(v);                                      // X = X | {v}
  }
}

// ACCEPTED for 77%
//FAILED : 9, 12,13

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;
  ss.resize(n); for (int i = 0; i < n; i++) cin >> ss[i].first >> ss[i].second;

  // make matrix n*n of all distances between stations
  build_distances_cache();

  // dfs to color each station by distance <= 2
  // make array colors[node] = <color id>
  //  and array stations_in_color[<color id>] = # of stations of that color
  colorify();

  // make array of sets for nodes that accessible with distance <= 4
  build_connection4_sets();

  // debug print all connectend nodes that has distance <= 4
  #ifdef _DEBUG
  for (int i = 0; i < n; i++) {
    cout << "Node " << (i+1) << ": ";
    print_set("connected with", *N[i], true);
  }
  #endif


  set<int> R, X;
  set<int> P;  for (int i = 0; i < n; i++) P.insert(i);

  // BronKerbosch1(set(), set(range(n)),set())
  BronKerbosch1(R, P, X);

  cout << (best_stations_count + 1) << '\n';

  return 0;
}
