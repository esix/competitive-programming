#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


struct Point {
  int x;
  int y;
  bool is_intersection;

  Point(): x(0), y(0), is_intersection(false) {
    //
  }

  bool operator==(const Point& p) const {
    return (x == p.x) && (y == p.y);
  }

  inline int dist(const Point& p) const {
    return abs(x - p.x) + abs(y - p.y);
  }
};



bool is_between(int x1, int x, int x2) {
  return ((x1 < x) && (x < x2)) || ((x2 < x) && (x < x1));
}


struct Segment {
  Point *p1;
  Point *p2;

  Segment(Point *p_p1, Point * p_p2) : p1(p_p1), p2(p_p2) {}

  bool is_horizontal() const {
    return p1->y == p2->y;
  }

  bool is_vertical() const {
    return p1->x == p2->x;
  }

  bool has_point_inside(const Point *p) const {
    if (is_horizontal()) {
      return (p->y == p1->y) && is_between(p1->x, p->x, p2->x);
    } else {
      return (p->x == p1->x) && is_between(p1->y, p->y, p2->y);
    }
  }
};


std::ostream& operator <<(std::ostream& os, const Point& point) {
  if (point.is_intersection) os << '['; else os << '(';
  os << point.x << ", " << point.y;
  if (point.is_intersection) os << ']'; else os << ')';
  return os;
}


std::ostream& operator <<(std::ostream& os, const Segment& segment) {
  return os << *segment.p1 << '-' << *segment.p2;
}
  

vector<Point*> points;
list<Segment> segments;


bool is_points_equal(const Point* p1, const Point* p2) {
  return (p1 != p2) && (*p1 == *p2);
}


void inject_point(list<Segment>::iterator &s1, const Point &p) {

}


void work_intersection(list<Segment>::iterator &s1, list<Segment>::iterator &s2) {
  cout << "intersection: " << *s1 << " ;;; " << *s2 << endl;
  if (is_points_equal(s1->p1, s2->p1)) s1->p1->is_intersection = s2->p1->is_intersection = true;
  if (is_points_equal(s1->p1, s2->p2)) s1->p1->is_intersection = s2->p2->is_intersection = true;
  if (is_points_equal(s1->p2, s2->p1)) s1->p2->is_intersection = s2->p1->is_intersection = true;
  if (is_points_equal(s1->p2, s2->p2)) s1->p2->is_intersection = s2->p2->is_intersection = true;

  if (s1->has_point_inside(s2->p1) && s1->has_point_inside(s2->p2)) {
    // both points of s2 are inside s1: determine which one is earlier
    

  }
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    Point *p = new Point();
    cin >> p->x >> p->y;
    points.push_back(p);
  }

  for (int i = 1; i < n; i++) { 
    Segment s(points[i-1], points[i]);
    segments.push_back(s);
  }

  for (list<Segment>::iterator et = segments.begin(); et != segments.end(); ++et) {
    for (list<Segment>::iterator st = segments.begin(); st != et; ++st) {
      work_intersection(st, et);
    }
  }


  for (list<Segment>::iterator it = segments.begin(); it != segments.end(); ++it) {
    cout << *it << endl;
  }


  return 0;
}
