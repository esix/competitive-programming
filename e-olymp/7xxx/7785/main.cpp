#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <limits>

using namespace std;


int n, m, k;
int kk;
vector<int> sum;
vector<int> start;
vector<int> result;
vector<int> pos(k, -2);

void inc_pos(int pos, int delta) {
  int t = pos + kk;
  sum[t] += delta;
  while (t > 1) {
    t /= 2;
    sum[t] = sum[2 * t] + sum[2 * t + 1];
  }
}

int count_pos_rec() {
  if (sum[1] == 0) {
    return m;
  } 
  int t = 1;
  while (t < kk) {
    t *= 2;
    if (sum[t] == 0) t++;
  }
  inc_pos(t - kk, -1);
  return t - kk;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> m >> k;
  vector< pair<int, int> > ps(2*k);

  for (int i = 0; i < k; ++i) {
    int a, b; 
    cin >> a >> b;
    ps[2*i] = make_pair(a-1, i);
    ps[2*i+1] = make_pair(b-1, -1 - i);
  }

  sort(ps.begin(), ps.end());

  start.resize(k);
  result.resize(m);
  pos = vector<int>(k, -2);
  
  int sits = m - 1;
  kk = 1;

  while (kk < m) {
    kk *= 2;
  }

  sum.resize(2 * kk + 10);

  for (int i = 0; i < m; ++i) {
    sum[kk + i] = 1;
  }

  for (int i = kk - 1; i >= 1; --i) {
    sum[i] = sum[2 * i] + sum[2 * i + 1];
  }

  for (int i = 0; i < 2*k; ++i) {
    int curT = ps[i].first;
    int num = ps[i].second;

    if (num >= 0) {
      start[num] = curT;
      if (sits > 0) {
        sits--;
        pos[num] = -1;
      } else {
        pos[num] = count_pos_rec();
      }
    } else {
      num = -1 - num;
      if (pos[num] == -1) {
        sits++;
      } else if (pos[num] < m) {
        int p = pos[num];
        inc_pos(p, 1);
        result[p] += curT - start[num];
      }
    }
  }

  int result_len = std::numeric_limits<int>::max();
  int result_seat = -1;
  
  for (int i = 0; i < m; ++i) {
    if (result[i] < result_len) {
      result_len = result[i];
      result_seat = i;
    }
  }
  
  cout << result_len << ' ' << (result_seat + 1) << '\n';
  return 0;
}
