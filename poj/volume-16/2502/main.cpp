#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <cmath>
#include <limits>

using namespace std;

typedef vector< pair<int, int> > TCoords;
TCoords coords;

int add_coords(int x, int y) {
  TCoords::iterator it = find(coords.begin(), coords.end(), make_pair(x, y));
  if (it != coords.end()) {
    int index = it - coords.begin();
    return index;
  } else {
    coords.push_back(make_pair(x, y));
    return coords.size() - 1;
  }
}

double sqr(int x) { return x * x;}

double dist(int i, int j) {
  return sqrt(sqr(coords[i].first - coords[j].first) +  sqr(coords[i].second - coords[j].second));
}

vector< vector<double> > times;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int x, y;
  cin >> x >> y;
  int start = add_coords(x, y);

  cin >> x >> y;
  int end = add_coords(x, y);

  vector< vector<int> > lines;
  vector<int> current_line;

  while (!cin.eof()) {
    cin >> x;
    if (cin.eof()) {
      break;
    }
    cin >> y;
    if (x == -1 && y == -1) {
      lines.push_back(current_line);
      current_line = vector<int>();
    } else {
      int idx = add_coords(x, y);
      current_line.push_back(idx);
    }
  }

  int N = coords.size();

  for (int i = 0; i < N; i++) {       // fill walking distances
    vector<double> tt;
    for (int j = 0; j < N; j++) tt.push_back(dist(i, j) / 10000);
    times.push_back(tt);
  }

  for (int m = 0; m < lines.size(); m++) {      // fill metro passes
    for (int i = 0; i < lines[m].size() - 1; i++) {
      int s = lines[m][i], e = lines[m][i + 1];
      double t = dist(s, e) / 40000;
      if (t < times[s][e]) {
        times[s][e] = times[e][s] = t;
      }
    }
  }

  vector<double> d(N);
  vector<double> v(N);
  const double MAX = std::numeric_limits<double>::max();

  for (int i = 0; i < N; i++) d[i] = MAX;
  for (int i = 0; i < N; i++) v[i] = 1;

  d[0] = 0;
  int minindex;

  do {
    double min = MAX;
    minindex = -1;

    for (int i = 0; i < N; i++) {
      if ((v[i] == 1) && (d[i] < min)) {
        min = d[i];
        minindex = i;
      }
    }

    if (minindex != -1) {
      for (int i = 0; i < N; i++) {
        if (times[minindex][i] > 0) {
          double temp = min + times[minindex][i];
          if (temp < d[i]) {
            d[i] = temp;
          }
        }
      }
      v[minindex] = 0;
    }
  } while (minindex != -1);

  cout << round(d[1] * 60) << endl;

  return 0;
}
