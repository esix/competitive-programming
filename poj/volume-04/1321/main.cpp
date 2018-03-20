#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int n, k;
vector<string> board;
vector<bool> visited;

int dfs(int cur, int num) {
  if(num == k) {
    return 1;
  }
  int result = 0;
  
  for(int i = cur; i < n; i ++) {
    for(int j = 0; j < n; j ++) {
      if(board[i][j] == '#' && ! visited[j]) {
        visited[j] = true;
        result += dfs(i + 1, num + 1);
        visited[j] = false;
      }
    }
  }
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    cin >> n >> k;
    if (n == 1 || k == -1) {
      break;
    }

    board.resize(n);
    for (int i = 0; i < n; i++) {
      cin >> board[i];
    }

    visited.resize(n);
    fill(visited.begin(), visited.end(), false);

    int result = dfs(0, 0);
    printf("%d\n", result);
  }

  return 0;
}
