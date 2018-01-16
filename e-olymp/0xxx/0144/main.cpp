#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


struct Point {
  int x;
  int y;
  Point(int p_x, int p_y) : x(p_x), y(p_y) {}
  Point() : x(0), y(0) {}
};


bool isRight(const Point& pl, const Point& p, const Point& pr) {
  Point v1(p.x - pl.x, p.y - pl.y);
  Point v2(pr.x - p.x, pr.y - p.y);
  int scalar = v1.x * v2.x + v1.y * v2.y;
  return scalar == 0;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  Point p1, p2, p3, p4;
  cin >> p1.x >> p1.y;
  cin >> p2.x >> p2.y;
  cin >> p3.x >> p3.y;
  cin >> p4.x >> p4.y;
  
  int result = int(isRight(p4, p1, p2)) +
               int(isRight(p1, p2, p3)) + 
               int(isRight(p2, p3, p4)) + 
               int(isRight(p3, p4, p1));

  cout << result << endl;
  return 0;
}
