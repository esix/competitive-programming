#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


#define WHITE 0                      // unknown
#define GRAY 1                       // visited this loop
#define BLACK 2                      // proceeded


int n;
vector< vector<int> > g(101, vector<int>(101));
vector<int> color(101);


void print_st() {
  for (int i = 0; i < n; i++) {
    cout << "Node " << (i+1) << ": ";
    if (color[i] == WHITE) cout << "WHITE";
    if (color[i] == GRAY) cout << "GRAY";
    if (color[i] == BLACK) cout << "BLACK";
    cout << endl;
  }
  cout << endl;
}


bool dfs_search_loop(int from, int prev = -1) {
  if (color[from] == BLACK) {
    return false;
  }

	color[from] = GRAY;
	for (int to = 0; to < n; to++) {
    if (!g[from][to]) continue;         // `from`-`to` not linked
    if (to == prev) continue;           // prev node: ignore

    if (color[to] == WHITE) {           // `to` not visited: start dfs from it
		  if (dfs_search_loop(to, from)) {
        return true;
      }
    } else if (color[to] == GRAY) {     // `to` visited in this path: found the loop
		  return true;
    }
	}
	color[from] = BLACK;            
	return false;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> g[i][j];
    }
  }

  //for (int i = 0; i < n; i++) {
	//	if (dfs_search_loop(i)) {
	//		cout << "NO" << endl;
  //    return 0;
  //  }
  //}

  if (dfs_search_loop(0)) {
	  cout << "NO" << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    if (color[i] == WHITE) {      // some nodes are not accessible from `0`: graph not linked and seem to be not a tree
	    cout << "NO" << endl;
      return 0;
    }
  }

  // print_st();

  cout << "YES" << endl;
  return 0;
}
