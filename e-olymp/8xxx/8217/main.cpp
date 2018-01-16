#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <map>

using namespace std;


int h, w;
vector< vector<char> > level;


bool is_inside(int y, int x) {
  return 0 <= y && y < h && 0 <= x && x < w;
}


char get_level(int y, int x) {
  return is_inside(y, x) ? level[y][x] : 'W';         // if outside, return WATER
}


char set_level(int  y, int x, char value) {
  return is_inside(y, x) ? (level[y][x] = value) : 'W';
}


//
// DFS for L's
//
void find_existent_islands_(int y, int x) {
  if (!is_inside(y, x)) {
    return;
  }

  char c = get_level(y, x);
  if (c == 'C') {
    c = set_level(y, x, 'W');         // just erase clouds near L's, make them WATER
  }
  if (c == 'W') {
    return;
  }
  set_level(y, x, 'W');               // WATERify all visited

  find_existent_islands_(y-1, x);
  find_existent_islands_(y+1, x);
  find_existent_islands_(y, x-1);
  find_existent_islands_(y, x+1);
}


int find_existent_islands() {
  int result = 0;

  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      if (get_level(y, x) == 'L') {
        result++;
        find_existent_islands_(y, x);
      }
    }
  }
  return result;
}


typedef map< pair<int, int>, int> nodes_t;
typedef vector<pair<int, int> > edges_t;

nodes_t nodes;
edges_t edges;


int add_node(int y, int x) {
  pair<int, int> v = make_pair(y, x);
  if (nodes.find(v) == nodes.end()) {
    int sz = nodes.size();
    nodes[v] = 1 + sz;
  }
  return nodes[v];
}


void add_edge(int a, int b) {
  edges.push_back(make_pair(a, b));
}


const int MAX = 50 * 50 + 2;

int cap[MAX][MAX];
int flow[MAX][MAX];
int q[MAX], pred[MAX];


int fill_pairs(int idx, int n) {
  q[0] = idx;
  int qg = 0, qp = 1;
  vector<bool> visited(n);

  while (qg < qp) {
    int a = q[qg++];
    for (int i = 0; i < n; i++) {
      if (!visited[i] && flow[a][i] < cap[a][i]) {
        pred[i] = a;
        if (i == n-1) {
          while (i != 0) {
            int b = pred[i];
            flow[b][i]++;
            flow[i][b]--;
            i = b;
          }
          return 1;
        }
        visited[i] = true;
        q[qp++] = i;
      }
    }
  }
  return 0;
}


int get_size() {
  int n = nodes.size() + 2;

  if (n == 3) {
    return 0;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cap[i][j] = flow[i][j] = 0;
    }
  }

  for (nodes_t::iterator it = nodes.begin(); it != nodes.end(); ++it) {
    int y = it->first.first;
    int x = it->first.second;
    if ((x + y) % 2 == 1) {
      cap[0][it->second] = 1;
    } else {
      cap[it->second][n-1] = 1;
    }
  }

  for (edges_t::iterator it = edges.begin(); it != edges.end(); ++it) {
    cap[it->first][it->second] = 1;
  }

  int result = 0;
  while (fill_pairs(0, n)) {
    result++;
  }
  return result;
}


void find_possible_islands_(int y, int x) {
  if (get_level(y, x) != 'C') {
    return;
  }
  int src = add_node(y, x);
  set_level(y, x, 'c');

  bool is_adding = (x + y) % 2 == 1;

  if (get_level(y-1, x) == 'C' || get_level(y-1, x) == 'c') {
    if (is_adding) add_edge(src, add_node(y-1, x));
    find_possible_islands_(y-1, x);
  }
  if (get_level(y+1, x) == 'C' || get_level(y+1, x) == 'c') {
    if (is_adding) add_edge(src, add_node(y+1, x));
    find_possible_islands_(y+1, x);
  }
  if (get_level(y, x-1) == 'C' || get_level(y, x-1) == 'c') {
    if (is_adding) add_edge(src, add_node(y, x-1));
    find_possible_islands_(y, x-1);
  }
  if (get_level(y, x+1) == 'C' || get_level(y, x+1) == 'c') {
    if (is_adding) add_edge(src, add_node(y, x+1));
    find_possible_islands_(y, x+1);
  }
}


int find_possible_islands() {
  int result = 0;
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      if (get_level(y, x) == 'C') {
        nodes.clear();
        edges.clear();
        find_possible_islands_(y, x);
        result += nodes.size() - get_size();
      }
    }
  }
  return result;
}


int main() {
  cin >> h >> w;
  level.resize(h);

  for (int y = 0; y < h; y++) {
    string s;
    cin >> s;
    level[y] = vector<char>(s.begin(), s.end());
  }

  int result = 0;
  result += find_existent_islands();
  result += find_possible_islands();

  cout << result << '\n';
}
