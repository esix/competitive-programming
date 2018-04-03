#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

const int MAXN = 100001;

int arr[MAXN];
int nums[MAXN];
vector<int> d[262143];

void init(int k, int l, int r) {
  if (r - l == 1) {
    d[k].push_back(arr[l]);
  } else {
    int lch = 2 * k + 1, rch = 2 * k + 2;
    init(lch, l, (l + r) / 2);
    init(rch, (l + r) / 2, r);
    d[k].resize(r - l);
    merge(d[lch].begin(), d[lch].end(), d[rch].begin(), d[rch].end(), d[k].begin());
  }
}

int query(int i, int j, int x, int k, int l, int r) {
  if (j <= l || r <= i) {
    return 0;
  }

  if (i <= l && r <= j) {
    return upper_bound(d[k].begin(), d[k].end(), x) - d[k].begin();
  }

  int lch = query(i, j, x, 2*k+1, l, (l+r)/2);
  int rch = query(i, j, x, 2*k+2, (l+r)/2, r);
  return lch + rch;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    nums[i] = arr[i] = a;
  }

  sort(nums, nums+n);
  init(0, 0, n);

  for (int t = 0; t < m; t++) {
    int i, j, k;
    cin >> i >> j >> k;
    i--;                // zero based
    int low = -1, high = n-1;

    while (high - low > 1) {
      int med = (low + high) / 2;
      int x = nums[med];
      int tmp = query(i, j, x, 0, 0, n);
      if (tmp >= k) {
        high = med;
      } else {
        low = med;
      }
    }
    cout << nums[high] << '\n';
  }

  return 0;
}
