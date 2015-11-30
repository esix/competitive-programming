#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <list>
#include <algorithm>
#include <map>
#include <queue>


using namespace std;

struct Node {
  list<Node*> nbs;
  bool visited;
  Node* parent;
  map<int, int> colores;

  void add_color(int c, int val = 1) {
    colores[c]+=val;
  }
};


void traverse_colores(Node* node) {
  for(list<Node*>::iterator it = node->nbs.begin(); it != node->nbs.end(); ++it) {
    Node *child = *it;
    if(child != node->parent) {
      traverse_colores(child);
      for(map<int, int>::iterator child_c = child->colores.begin(); child_c != child->colores.end(); ++child_c){
        node->add_color(child_c->first, child_c->second);
      }
    }
  }
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<Node> node(n);

  for(int i = 0; i < n; i++) {
    int c;
    cin >> c;
    node[i].add_color(c);
  }

  for(int i = 0; i < n-1; i++) {
    int a, b;
    cin >> a >> b;
    a--;b--;
    node[a].nbs.push_back(&node[b]);
    node[b].nbs.push_back(&node[a]);
  }

  //parentify
  queue<Node*> q;
  q.push(&node[0]);
  while(!q.empty()) {
    Node *n = q.front();
    q.pop();

    n->visited = true;
    for(list<Node*>::iterator it = n->nbs.begin(); it != n->nbs.end(); ++it) {
      Node *nb = *it;
      if(!nb->visited) {
        nb->parent = n;
        q.push(nb);
      }
    }
  }

  traverse_colores(&node[0]);

  for(int i = 0; i < n; i++) {
    map<int, int>::reverse_iterator it = node[i].colores.rbegin();
    int dominated_value = it->second;
    int val = 0;

    for(; it != node[i].colores.rend() && it->second == dominated_value; ++it){
      val += it->first;
    }
    cout << val << " ";
  }



  return 0;
}
