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
struct Vec; struct Circle; struct Ray;


#define EPS 1e-6

struct Vec {
  double x, y, z;
  Vec() : x(0), y(0), z(0) {}
  Vec(const Vec& rv) : x(rv.x), y(rv.y), z(rv.z) {}
  Vec(double __x, double __y, double __z): x(__x), y(__y), z(__z) {}

  const Vec operator+(const Vec& rv) const { return Vec(x+rv.x, y+rv.y, z+rv.z); }
  const Vec operator-(const Vec& rv) const { return Vec(x-rv.x, y-rv.y, z-rv.z); }
  double    operator*(const Vec& rv) const { return x*rv.x + y*rv.y + z*rv.z;    }
};

const Vec operator*(const Vec& v, double c) { return Vec(v.x * c, v.y * c, v.z * c); }
const Vec operator*(double d, const Vec& v) { return v * d;  }


struct Circle : public Vec {
  double r;
  Circle() : Vec(), r(0) {}
  Circle(const Vec& __center, double __r) : Vec(__center), r(__r) {}
  Circle(double __x, double __y, double __z, double __r) : Vec(__x, __y, __z), r(__r) {}
};


struct Ray {
  Vec start, dir;
  Ray() {}
  Ray(const Vec& __start, const Vec& __dir) : start(__start), dir(__dir) {}

  const Ray operator-(const Vec& rv) const { return Ray(start - rv, dir); }
};


istream& operator>>(istream &in,  Vec &vec)        { return in >> vec.x >> vec.y >> vec.z; }
istream& operator>>(istream &in,  Circle &c)       { return in >> static_cast<Vec&>(c) >> c.r; }
istream& operator>>(istream &in,  Ray &ray)        {  Vec end; in >> ray.start >> end; ray.dir = end  - ray.start; return in; }
ostream& operator<<(ostream &out, const Vec &vec)  { return out << vec.x << ", " << vec.y << ", " << vec.z;   }
ostream& operator<<(ostream &out, const Circle &c) { return out << static_cast<const Vec&>(c) << " : " << c.r; }
ostream& operator<<(ostream &out, const Ray &r)    { return out << "(" << r.start << ")->(" << r.dir << ")";  }


bool intersects(const Ray& ray, const Circle& circle, /*OUT*/ double& res) {
  Ray r = ray - circle;       // move coords to circle center

  double a = r.dir * r.dir;
  double b = 2 * (r.dir * r.start);
  double c = r.start * r.start - circle.r * circle.r;

  double d = b * b - 4 * a * c;
  if(d < 0) {
    return false;
  }

  double t1 = (-b + sqrt(d)) / (2 * a);
  double t2 = (-b - sqrt(d)) / (2 * a);
  double t = min(t1, t2);
  if(t < EPS) t = max(t1, t2);
  if(t < EPS) return false;
  res = t;
  return true;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<Circle> cs(n);
  for(int i = 0; i < n; i++) {
    cin >> cs[i];
  }

  Ray r;
  cin >> r;

  for(int i = 0; i < 11; i++) {
    double min_t = numeric_limits<double>::infinity(), t;
    int idx = -1;

    for(int j = 0; j < n; j++) {
      if(intersects(r, cs[j], t) && t < min_t) {
        idx = j;
        min_t = t;
      }
    }

    if(idx == -1) {
      cout << endl;
      return 0;
    }

    if(i == 10) {
      cout << "etc." << endl;
      return 0;
    }

    cout << idx + 1 << " ";

    Vec o = r.start + min_t * r.dir;
    Vec n = o - cs[idx];
    Vec d2 = r.dir - 2 * n * ((r.dir * n) / (n * n));
    r = Ray(o, d2);

    //cout << "Intersect " << idx + 1 << " at point (" << o << ") t=" << min_t << endl;
    //cout << "Now ray is " << r << endl;
  }

  return 0;
}
