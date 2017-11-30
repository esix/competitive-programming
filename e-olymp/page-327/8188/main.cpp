#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>


using namespace std;


void get_hilbert_position_(double x, double y, double s, char *buffer, int step) {
  if (step == 0) {
    *buffer = 0;
    return;
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

  *buffer = q + '0';
  get_hilbert_position_(xx, yy, h, buffer+1, step-1);
}

string get_hilbert_position(double x, double y, double s) {
  // get number of steps needed 
  int iterations_count = 1;
  double ss = s; while((ss /= 2) > 0.1) iterations_count++;

  char* buffer = new char[iterations_count+1];
  get_hilbert_position_(x, y, s, buffer, iterations_count);

  string res = buffer;
  delete[] buffer;
  return res;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, s;
  cin >> n >> s;
  map<string, string> result;

  for (int i = 0; i < n; i++) {
    int x, y;
    string name;
    cin >> x >> y >> name;
    string pos = get_hilbert_position(x, y, s);
    // cout << name << " : " << pos << endl;
    result.insert(make_pair(pos, name));
  }

  for (map<string, string>::iterator it = result.begin(); it != result.end(); ++it) {
    cout << it->second << '\n';
  }

  return 0;
}
