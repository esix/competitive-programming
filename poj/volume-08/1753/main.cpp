#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>


using namespace std;


int toBin4(const string& s) {
  return ((s[0] == 'w') << 3) | 
         ((s[1] == 'w') << 2) | 
         ((s[2] == 'w') << 1) | 
         ((s[3] == 'w') << 0);
}


void invert_bit_l(int &state, int i) {
  state ^= 1 << (15-i);
}


int make_move(int state, int i) {
  int x = i & 3, y = (i >> 2) & 3;      // 0..4
  invert_bit_l(state, i);
  if (x > 0) invert_bit_l(state, i-1);
  if (x < 3) invert_bit_l(state, i+1);
  if (y > 0) invert_bit_l(state, i-4);
  if (y < 3) invert_bit_l(state, i+4);
  return state;
}


void print_state(int state) {
  int mask = 1 << 15;
  for (int y = 0; y < 4; y++) {
    for (int x = 0; x < 4; x++) {
      cout << ((state & mask) ? 'w' : 'b');
      mask = mask >> 1;
    }
    cout << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;

  int s = (toBin4(s1) << 12) |      // start
          (toBin4(s2) << 8)  |
          (toBin4(s3) << 4)  |
          (toBin4(s4) << 0);
  
  vector<int> steps(65536);
  vector<bool> pending(65536);
  queue<int> q;

  q.push(s);
  pending[s] = true;

  while (true) {
    if (q.empty()) {
      break;
    }

    int state = q.front();
    q.pop();
    int current_steps = steps[state];

    if (state == 0 || state == 65535) {       // win
      cout << current_steps << endl;
      return 0;
    }

    current_steps++;

    for (int i = 0; i < 16; i++) {
      int new_state = make_move(state, i);
      if (!pending[new_state]) {
        pending[new_state] = true;
        q.push(new_state);
        steps[new_state] = current_steps;
      }
    }
  }

  cout << "Impossible\n";
  return 0;
}
