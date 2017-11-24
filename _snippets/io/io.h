//
//
//
void read_vector() {
  int n;
  cin >> n;

  vector<int> vs;
  vs.reserve(n);
  copy_n(istream_iterator<int>(cin), n, back_inserter(vs));
}


void write_vector() {
  vector<int> vs;
  copy(vs.begin(), vs.end(), ostream_iterator<int>(cout, " ")); 
}
