#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

pair<int, int> steps[] = {
  pair<int,int>(+2, -1),
  pair<int,int>(+1, -2),
  pair<int,int>(-1, -2),
  pair<int,int>(-2, -1),
  pair<int,int>(-2, +1),
  pair<int,int>(-1, +2),
  pair<int,int>(+1, +2),
  pair<int,int>(+2, +1)
};


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, x0, y0, x1, y1;
  cin >> n >> x0 >> y0 >> x1 >> y1;
  x0--;
  y0--;
  x1--;
  y1--;
  
  vector< vector<int> > board(n, vector<int>(n, -1));
  board[x0][y0] = 0;
  
  queue< pair<int, int> > q;
  
  q.push(make_pair(x0, y0));
  

  while (!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();

    int x = p.first, y = p.second, cur = board[x][y];
    
    for (int i = 0; i < 8; i++) {
      
      int xx = x + steps[i].first, yy = y + steps[i].second;
      
      if (0 <= xx && xx < n && 0 <= yy && yy < n && board[xx][yy] == -1) {
        board[xx][yy] = cur + 1;
        q.push(make_pair(xx, yy));
      }
    }

    if (x == x1 && y == y1) {
      break;
    }
  }

  cout << board[x1][y1] << endl;

  return 0;
}
