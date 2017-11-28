#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <deque>

using namespace std;


// return [0..1)
// didn't work because of double precision
double get_hilbert_position(double x, double y, double s) {
  if (s < 0.00125) {
    return 0;
  }

  double h = s / 2;
  int q;
  if (x < h) {
    q = (y < h) ? 0 : 1;
  } else {
    q = (y < h) ? 3 : 2;
  }

  double xx, yy;

  switch (q) {
    case 0: 
      xx = y;
      yy = x;
      break;
    case 1:
      xx = x;
      yy = y - h;
      break;
    case 2:
      xx = x - h;
      yy = y - h;
      break;
    case 3:
      xx = h - y;
      yy = s - x;
      break;
  }

  double inner =  get_hilbert_position(xx, yy, h);

  // cout << "Counting x=" << x << " y=" << y << " s=" << s << endl;
  // cout << "    Q=" << q << endl;
  // cout << "    xx=" << xx << "  yy=" << yy << endl;
  // cout << "    recursion res=" << inner << endl;
  // cout << "    res=" << (seed * q + inner) << endl;


  return (q + inner) / 4;
}



// return [0..1)
deque<char>* get_hilbert_position_2_helper(double x, double y, double s) {
  if (s < 0.1) {
    return new deque<char>();
  }

  double h = s / 2;
  int q;
  if (x < h) {
    q = (y < h) ? 0 : 1;
  } else {
    q = (y < h) ? 3 : 2;
  }

  double xx, yy;

  switch (q) {
    case 0: 
      xx = y;
      yy = x;
      break;
    case 1:
      xx = x;
      yy = y - h;
      break;
    case 2:
      xx = x - h;
      yy = y - h;
      break;
    case 3:
      xx = h - y;
      yy = s - x;
      break;
  }

  deque<char> *inner =  get_hilbert_position_2_helper(xx, yy, h);
  inner->push_front(q + '0');

  return inner;
}

string get_hilbert_position_2(double x, double y, double s) {
  deque<char> *inner = get_hilbert_position_2_helper(x, y, s);
  string res(inner->begin(), inner->end());
  delete inner;                             // without it - failed on test 7 with out of memory
  return res;
}


typedef string KEY;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, s;
  cin >> n >> s;
  map<KEY, string> result;

  for (int i = 0; i < n; i++) {
    int x, y;
    string name;
    cin >> x >> y >> name;
    KEY pos = get_hilbert_position_2(x, y, s);
    //cout << name << " : " << pos << endl;
    result.insert(make_pair(pos, name));
  }

  for (map<KEY, string>::iterator it = result.begin(); it != result.end(); ++it) {
    cout << it->second << '\n';
  }

  return 0;
}
