#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

#define maxn 210
#define inf 1000000000
int n, m;
int cap[maxn][maxn] = {0};

int edmonds_karp(int src, int dest) {
  int result = 0;
  int cur_flow[maxn] = {0};
  int prev[maxn] = {0};
  queue<int> q;

  while (true) {
    memset(cur_flow, 0, sizeof(cur_flow));

    cur_flow[src] = inf;
    q.push(src);
    while (!q.empty()) {
      int cur = q.front();
      q.pop();
      for (int i = 1; i <= m; ++i) {
        if (!cur_flow[i] && cap[cur][i] > 0) {
          q.push(i);
          if (cur_flow[cur] > cap[cur][i])
            cur_flow[i] = cap[cur][i];
          else
            cur_flow[i] = cur_flow[cur];
          prev[i] = cur;
        }
      }
    }

    if (cur_flow[dest] == 0) {
      break;
    }

    for (int i = dest; i != src; i = prev[i]) {
      cap[prev[i]][i] -= cur_flow[dest];
      cap[i][prev[i]] += cur_flow[dest];
    }

    result += cur_flow[dest];
  }
  return result;
}



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (cin >> n >> m) {
    memset(cap, 0, sizeof(cap));

    for (int i = 0; i < n; i++) {
      int s, e, c;
      cin >> s >> e >> c;
      cap[s][e] += c;
    }
    cout << edmonds_karp(1, m) << endl;

  }

  return 0;
}
