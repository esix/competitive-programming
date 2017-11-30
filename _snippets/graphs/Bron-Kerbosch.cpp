// /e-olymp/~contest-9151/I

#include <set>


void print_set(const string& set_name, const set<int> &s, bool must_add_one = false) {
  #ifdef _DEBUG
  cout << set_name << ": { ";
  for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
    cout << (*it + int(must_add_one)) << ' ';
  }
  cout << '}' << endl;
  #endif
}


set<int> sets_intersect(const set<int>& p1, const set<int>& p2) {
  set<int> result;
  for (set<int>::const_iterator it = p1.cbegin(); it != p1.cend(); ++it) {
    if (p2.find(*it) != p2.cend()) {
      result.insert(*it);
    }
  }
  return result;
}


// set of neighbours for each node
vector< set<int>* > N;


void BronKerbosch1(set<int> R, set<int> P, set<int>X) {
  if (P.empty() && X.empty()) {                        // if not P and not X:
    print_set("Found clique", R);
  }
  
  while (!P.empty()) { 
    int v = *P.begin();             // for v in P:

    set<int> R1 = R;                // R | {v}
    R1.insert(v);

    BronKerbosch1(R1, sets_intersect(P, *N[v]), sets_intersect(X, *N[v]));       // BronKerbosch1(R | {v}, P & N(v), X & N(v))

    P.erase(P.begin());                               // P = P - {v}
    X.insert(v);                                      // X = X | {v}
  }
}



int main() {
  set<int> R, X;
  set<int> P;  for (int i = 0; i < n; i++) P.insert(i);

  // R = {}
  // P = {0 .. n-1}
  // X = {}
  BronKerbosch1(R, P, X);
}
