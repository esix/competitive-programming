#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>


using namespace std;

typedef unsigned int uint;


vector<uint> find_primes(uint n) {
  vector<uint> result;
  for (uint i = 2; i < sqrt(n) + 1e-5; ) {
    if (n % i == 0) {
      result.push_back(i);
      n /= i;
    } else {
      i++;
    }
  }
  if ( n > 1 ) {
    result.push_back(n);
  }
  return result;
}


map<uint, uint> combine_multipliers(const vector<uint>& primes) {
  map<uint, uint> result;
  
  for(int j = 0; j < primes.size(); j++) {
    uint prime = primes[j];

    map<uint, uint>::iterator it = result.find(prime);
    if (it != result.end()) {
      it->second++;
    } else {
      result.insert(make_pair(prime, 1));
    }
  }
  return result;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int i = 0;
  while (true) {
    int n;
    cin >> n;
    i++;
    if (n == 0) {
      break;
    }

    if (n == 1) {
      cout << "Case " << i << ": " << 2 << "\n";
      continue;
    }

    vector<uint> primes = find_primes(n);
    map<uint, uint> muls = combine_multipliers(primes);

    if (muls.size() == 1) {    // only one number
      muls[1] = 1;
    }

    uint result = 0;

    for(map<uint, uint>::iterator it = muls.begin(); it != muls.end(); ++it) {
      uint prime = it->first;
      uint power = it->second;
      uint mRes = 1;

      for (int j = 0; j < power; j++) mRes *= prime;

      result += mRes;
    }

    cout << "Case " << i << ": " << result << "\n";
  }
  return 0;
}
