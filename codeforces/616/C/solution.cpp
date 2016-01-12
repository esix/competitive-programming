#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <queue>


using namespace std;

vector<string> lab;
vector<vector<int*> > l;
int n, m;


int* build(int i, int j) {
  int* v = new int;
  *v = 1;

  queue< pair<int, int> > q;
  q.push(make_pair(i, j));
  l[i][j] = v;

  while(!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();

    int i = p.first, j = p.second;
    l[i][j] = v;

    if(i > 0   && lab[i-1][j] == '.' && l[i-1][j] == NULL) { q.push(make_pair(i-1, j)); l[i-1][j] = v; (*v)++; }
    if(i < n-1 && lab[i+1][j] == '.' && l[i+1][j] == NULL) { q.push(make_pair(i+1, j)); l[i+1][j] = v; (*v)++; }
    if(j > 0   && lab[i][j-1] == '.' && l[i][j-1] == NULL) { q.push(make_pair(i, j-1)); l[i][j-1] = v; (*v)++; }
    if(j < m-1 && lab[i][j+1] == '.' && l[i][j+1] == NULL) { q.push(make_pair(i, j+1)); l[i][j+1] = v; (*v)++; }
  }
  return v;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> m;

  lab = vector<string>(n);
  for(int i = 0; i < n; i++) {
    cin >> lab[i];
  }


  l = vector<vector<int*> >(n, vector<int*>(m));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(l[i][j]) continue;
      if(lab[i][j] != '.') continue;
      build(i, j);
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(l[i][j] != NULL)
        cout << ".";
      else {
        int *T = (i > 0  ) ? l[i-1][j] : NULL;
        int *L = (j > 0  ) ? l[i][j-1] : NULL;
        int *B = (i < n-1) ? l[i+1][j] : NULL;
        int *R = (j < m-1) ? l[i][j+1] : NULL;
        int val = 1;
        if(T != NULL) val += *T;
        if(L != NULL && L != T) val += *L;
        if(B != NULL && B != T && B != L) val += *B;
        if(R != NULL && R != T && R != L && R != B) val += *R;

        cout << (val%10);
      }
    }
    cout << endl;
  }


  return 0;
}
