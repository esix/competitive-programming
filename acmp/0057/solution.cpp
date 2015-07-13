#include <utility>
#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>

using namespace std;

#define sqr(a) ((a)*(a))

inline double dist(pair<int,int> a, pair<int,int> b) {
  return sqrt(sqr(a.first - b.first) + sqr(a.second - b.second));
}

const double eps = 1e-6;

int main() {
  ios::sync_with_stdio(false);
  fstream inp, out;
  inp.open("input.txt", fstream::in);
  out.open("output.txt", fstream::out);

  int N, c;
  double p;
  inp >> N >> c >> p;

  vector< pair<int, int> > coords(N);
  pair<int, int> p0;

  for(int i = 0; i < N; i++) {
    inp >> coords[i].first >> coords[i].second;
  }
  inp >> p0.first >> p0.second;

  string answer = "NO";

  for(int i = 0; i < N; i++) {
    double len = 0;
    for(int j = 0; j < N; j++) len += dist(coords[i], coords[j]);
    len += dist(coords[i], p0);

    if(c * len <= p + eps) {
      answer = "YES";
      break;
    }
  }

  cout << answer;
  out << answer;

  return 0;
}
