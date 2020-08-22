#include <iostream>
#include <map>
#include <stack>
#include <list>

using namespace std;


struct Cell {
  Cell(): a(-1), b(-1), inverted(false), index(-1) {}

  Cell(int p_a, int p_b, bool p_inverted, int p_index) : a(p_a), b(p_b), inverted(p_inverted), index(p_index) {}

  int from() const { return inverted ? b : a; }
  int to() const   { return inverted ? a : b; }
  void invert() { inverted = !inverted; }

  void clear() {
    a = -1; b = -1; index = -1; inverted = false;
  }

  bool is_invalid() const {
    return a == -1 || b == -1;
  }

  int a;
  int b;
  int index;
  bool inverted;
};


int main() {
  ios::sync_with_stdio(false);
  int N;
  cin >> N;


  Cell ps[101];
  int e_count[7] = {0};

  for(int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    ps[i] = Cell(a, b, false, i+1);
    e_count[a]++;
    e_count[b]++;
  }

  int start = -1, end = -1;
  bool is_impossible = false;

  for(int i=0; i <= 6; i++) {
    if(e_count[i] % 2 == 1) {
      if(start == -1) start = i;
      else if(end == -1) end = i;
      else is_impossible = true;
    }
  }

  if(start == -1) {
    for(int i=0; i <= 6; i++) {
      if(e_count[i]) {
        start = i;
        break;
      }
    }
  }

  stack<Cell> s;
  list<Cell> result;
  s.push(Cell(-1, start, false, -1));   //fake domino cell

  while(!s.empty()) {
    int w = s.top().to();

    int u = -1;
    for(int i = 0; i < N; i++) {
      if(ps[i].from() == w || ps[i].to() == w) {
        if(ps[i].from() != w) ps[i].invert();
        u = ps[i].to();
        s.push(ps[i]);
        ps[i].clear();
        break;
      }
    }

    if(u == -1) {
      Cell cell = s.top();
      if(!cell.is_invalid())
        result.push_back(cell);
      s.pop();
    }
  }

  for(int i = 0; i < N; i++) {
    if(!ps[i].is_invalid()) {
      is_impossible = true;
      break;
    }
  }

  if(is_impossible)
    cout << "No solution";
  else
    for(list<Cell>::iterator it = result.begin(); it != result.end(); ++it) {
      cout << it->index << " " << (it->inverted ? '+' : '-') << '\n';
    }

  return 0;
}
