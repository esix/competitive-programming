#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


struct Point {
  Point(): entrances(0), exits(0) {}
  Point(int _entrances, int _exits): entrances(_entrances), exits(_exits) {}
  int entrances;
  int exits;
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  map<int, Point> ps;

  for(int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;

    map<int, Point>::iterator it;

    it = ps.find(l);
    if(it == ps.end()) ps.insert(make_pair(l, Point(1, 0)));
    else it->second.entrances++;

    it = ps.find(r);
    if(it == ps.end()) ps.insert(make_pair(r, Point(0, 1)));
    else it->second.exits++;
  }

  int num_of_points = 0;
  bool is_writing = false;


  vector<pair<int, int> > res;


  for(map<int, Point>::iterator it = ps.begin(); it != ps.end(); it++) {
    num_of_points += it->second.entrances;
    if(num_of_points >= k && !is_writing) {
      is_writing = true;
      //cout << it->first << " ";
      res.push_back(make_pair(it->first, 0));
    }

    num_of_points -= it->second.exits;
    if(num_of_points < k && is_writing) {
      is_writing = false;
      //cout << it->first << endl;
      res[res.size()-1].second = it->first;
    }
  }

  cout << res.size() << endl;
  for(int i = 0; i < res.size(); i++) {
    cout << res[i].first << " " << res[i].second << endl;
  }


  return 0;
}
