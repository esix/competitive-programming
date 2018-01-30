#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<int> tariffs(n);
  for (int i = 0; i < n; i++) cin >> tariffs[i];

  vector<int> weights(m);
  for (int j = 0; j < m; j++) cin >> weights[j];

  set<int> free_places;
  for (int i = 0; i < n; i++) free_places.insert(i);

  queue<int> waiting;

  vector<int> place_of_car(m);

  int total = 0;

  for (int j = 0; j < 2*m; j++) {
    int car;
    cin >> car;
    if (car > 0) {    // incoming
      car--;

      if (free_places.empty()) {    // no free place
        waiting.push(car);
      } else {
        set<int>::iterator it = free_places.begin();
        int place = *it;
        free_places.erase(it);
        // park
        place_of_car[car] = place;
        total += weights[car] * tariffs[place];
      }

    } else {      // outgoing
      car = -car;
      car--;

      int place = place_of_car[car];
      if (waiting.empty()) {
        free_places.insert(place);
      } else {
        car = waiting.front();    // park next waiting car
        waiting.pop();
        // park
        place_of_car[car] = place;
        total += weights[car] * tariffs[place];
      }
    }
  }

  cout << total << endl;

  return 0;
}
