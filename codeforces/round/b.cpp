#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

vector<int> a;

int search_pos(int b, int i, int j) {
  cout << "search " << b << " from";
  if(a[j] <= b) return j;
  if(b < a[i]) return i-1;
  int mid = a[(i + j) / 2];
  if(a[mid] <= b) return search_pos(b, mid, j);
  else return search_pos(b, i, mid);
}



int search_pos(int b) {
  return search_pos(b, 0, a.size() - 1);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  a = vector<int>(n);

  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());

  for(int i = 0; i < m; i++) {
    int b;
    cin >> b;
    vector<int>::iterator upper = std::upper_bound(a.begin(), a.end(), b);
    int u = upper - a.begin();
    cout << u << " ";
  }


  return 0;
}
