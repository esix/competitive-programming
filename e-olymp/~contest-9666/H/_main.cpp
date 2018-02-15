#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <iomanip>

using namespace std;

const double EPS = 1e-2;


struct Point {
  double x;
  double y;
  double z;
};

inline bool operator<(const Point& p1, const Point& p2) { 
  return p1.x < p2.x || 
        (!(p2.x < p1.x) && p1.y < p2.y) || 
        (!(p2.x < p1.x) && !(p2.y < p1.y) && p1.z < p2.z);
}

istream& operator>>(std::istream& is, Point& p) {
  return is >> p.x >> p.y >> p.z;
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
  return os << p.x << ' ' << p.y << ' ' << p.z;
}


inline double sqr(double x) {
  return x * x;
}

double dist(const Point& A, const Point& B) {
  return sqrt(sqr(A.x - B.x) +
              sqr(A.y - B.y) +
              sqr(A.z - B.z));
}

double area(const Point& A, const Point& B, const Point& C) {
  double c = dist(A, B);
  double b = dist(A, C);
  double a = dist(B, C);
  double p = (a + b + c) / 2;
  return sqrt(p * (p-a) * (p - b) * (p - c));
}


struct Triangle {
  Point p[3];
};


bool inRan(const Triangle& t, const Point& A) {
  double S = area(t.p[0], t.p[1], t.p[2]);
  double s1 = area(t.p[0], t.p[1], A);
  double s2 = area(t.p[0], t.p[2], A);
  double s3 = area(t.p[1], t.p[2], A);
  return fabs(S - s1 - s2 - s3) <= EPS;
}


vector<Triangle> ts;
map<Point, int> H;
map<int, Point> T;

int total = 1;
Point A, B;
vector<int> E[7000];
vector<bool> visited(7000);
int n;

void init() {
  fill(visited.begin(), visited.end(), false);
  H.clear();
  T.clear();
  for(int i=0; i < 7000; i++) {
    E[i].clear();
  }
}


void dfs(int x, int h) {
  visited[x] = true;
  for(int i = 0; i < E[x].size(); i++) {
    int v = E[x][i];
    if (visited[v]) {
      continue;
    }

    if (T[v].z>h) {
      continue;
    }

    dfs(v,h);
  }
}

int check(double h) {
  if (A.z > h || B.z > h) {
    return 0;
  }
  fill(visited.begin(), visited.end(), false);

  dfs(H[A], h);

  if(visited[H[B]]) {
    return 1;
  }

  return 0;
}

vector<Point> TTT;
bool flag = false;

void dfs2(int x, double h) {
  if (flag) {
    return;
  }

  TTT.push_back(T[x]);

  if (x == H[B]) {
    flag = true;
    cout << TTT.size() << endl;

    for(int i = 0; i < TTT.size(); i++) {
      cout << std::fixed << setprecision(0) << TTT[i] << '\n';
    }
    return;
  }
  
  visited[x] = 1;
  for(int i = 0; i < E[x].size(); i++) {
    int v = E[x][i];
    if (visited[v]) {
      continue;
    }

    if (T[v].z > h) {
      continue;
    }

    dfs2(v,h);
    TTT.pop_back();
  }
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  init();
  cin >> n;

  ts.resize(n + 1);

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> ts[i].p[j];
      if (H[ts[i].p[j]] == 0) {
        T[total] = ts[i].p[j];
        H[ts[i].p[j]] = total;
        total++;
      }
    }
    
    for (int j = 0; j < 3; j++) {
      for (int k = j + 1; k < 3; k++) {
        E[H[ts[i].p[j]]].push_back(H[ts[i].p[k]]);
        E[H[ts[i].p[k]]].push_back(H[ts[i].p[j]]);
      }
    }
  }

  cin >> A;
  cin >> B;

  if (H[A] == 0) {
    T[total] = A;
    H[A] = total;
    total++;
    for (int i = 1; i <= n; i++) {
      if (inRan(ts[i],A)) {
        for (int j=0;j<3;j++) {
          E[H[A]].push_back(H[ts[i].p[j]]);
          E[H[ts[i].p[j]]].push_back(H[A]);
        }
      }
    }
  }

  if (H[B] == 0) {
    T[total] = B;
    H[B] = total++;
    for (int i=1;i<=n;i++) {
      if (inRan(ts[i],B)) {
        for (int j = 0; j < 3; j++) {
          E[H[B]].push_back(H[ts[i].p[j]]);
          E[H[ts[i].p[j]]].push_back(H[B]);
        }
      }
    }
  }
  
  double l = -2, r = 3000050;
  for (int i = 1; i <= 100; i++) {
    double mid = (l+r) / 2;
    if (check(mid)) {
      r = mid;
    } else {
      l = mid;
    }
  }
  
  fill(visited.begin(), visited.end(), false);
  TTT.clear();
  dfs2(H[A], r+1);
}
