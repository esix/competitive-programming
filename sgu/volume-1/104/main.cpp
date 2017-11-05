#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define INF 1000000




int main() {
  ios::sync_with_stdio(false);

  int F, V;
  cin >> F >> V;

  vector< vector<int> > a(F, vector<int>(V));

  for(int f = 0; f < F; f++)
    for(int v = 0; v < V; v++)
      cin >> a[f][v];

  vector< vector<int> > b(F, vector<int>(V));
  vector< vector<int> > prev(F, vector<int>(V));
  vector< vector<int> > cur(F, vector<int>(V));


  // first row:
  b[0][0] = a[0][0];
  prev[0][0] = -1;
  cur[0][0] = 0;
  for(int j = 1; j < V-F+1; j++) {
    if(b[0][j-1] > a[0][j]) {
      b[0][j] = b[0][j-1];
      prev[0][j] = -1;
      cur[0][j] = cur[0][j-1];
    } else {
      b[0][j] = a[0][j];
      prev[0][j] = -1;
      cur[0][j] = j;
    }
  }

  // rest rows
  int last_best;
  for(int i = 1; i < F; i++) {
    b[i][i] = b[i-1][i-1] + a[i][i];
    prev[i][i] = i - 1;
    cur[i][i] = i;

    for(int j = i+1; j <= i + V-F; j++) {
      if(b[i][j-1] > b[i-1][j-1] + a[i][j]) {
        b[i][j] = b[i][j-1];
        prev[i][j] = prev[i][j-1];
        cur[i][j] = cur[i][j-1];
      } else {
        b[i][j] = b[i-1][j-1] + a[i][j];
        prev[i][j] = j - 1;
        cur[i][j] = j;
      }
    }
  }

/*
  for(int i = 0; i < F; i++) {
    for(int j = 0; j < V; j++) cout << b[i][j] << ' ';
    cout << endl;
  }
cout << endl;
for(int i = 1; i < F; i++) {
  for(int j = 0; j < V; j++) cout << prev[i][j] << ' ';
  cout << endl;
}

cout << endl;
for(int i = 0; i < F; i++) {
  for(int j = 0; j < V; j++) cout << cur[i][j] << ' ';
  cout << endl;
}
cout << endl;
*/

  cout << b[F-1][V-1] << endl;

  vector<int> s(F);
  int idx = V-1;
  for(int f = F-1; f >= 0; f--) {
    idx = cur[f][idx];
    s[f] = idx;
    //cout << f << 'x' << idx << '=' << cur[f][idx] << endl;
    idx = prev[f][idx];
  }

  for(int f = 0; f < F; f++) {
    cout << s[f] + 1 << " ";
  }



  return 0;
}
