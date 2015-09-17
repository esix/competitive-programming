#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;
struct Vec; struct Circle; struct Ray;

struct Vec {
  double x, y, z;
  Vec() {}
  Vec(int X, int Y, int Z): x(X), y(Y), z(Z) {}
  const Vec operator-(const Vec& rv) const { return Vec(x-rv.x, y-rv.y, z-rv.z); }
  const Vec operator+(const Vec& rv) const { return Vec(x+rv.x, y+rv.y, z+rv.z); }
};
struct Circle : public Vec {
  double r;
};
struct Ray {
  Vec start, dir;
};


istream& operator>>(istream &in,  Vec &vec)        { return in >> vec.x >> vec.y >> vec.z; }
istream& operator>>(istream &in,  Circle &c)       { return in >> static_cast<Vec&>(c) >> c.r; }
istream& operator>>(istream &in,  Ray &ray)        {  Vec end; in >> ray.start >> end; ray.dir = end  - ray.start; return in; }
ostream& operator<<(ostream &out, const Vec &vec)  { return out << vec.x << ", " << vec.y << ", " << vec.z;   }
ostream& operator<<(ostream &out, const Circle &c) { return out << static_cast<const Vec&>(c) << " : " << c.r; }
ostream& operator<<(ostream &out, const Ray &r)    { return out << "(" << r.start << ")->(" << r.dir << ")";  }



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<Circle> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  Ray r;
  cin >> r;
  cout << r << endl;

  return 0;
}
