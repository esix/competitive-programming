void make_sieve(int n, vector<int>& ps) {
    if (n < 2) {
      return;
    }
  
    vector<bool> sieve(n+1);
  
    int prime = 2;
    ps.push_back(prime);
  
    while (true) {
      for (int c = prime + prime; c <= n; c += prime) sieve[c] = true;
      do {
        if (++prime > n) return;
      } while (sieve[prime]);
  
      ps.push_back(prime);
    }
  }
  