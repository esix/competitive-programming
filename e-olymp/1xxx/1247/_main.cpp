#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h>


using namespace std;


vector<int> find_primes(int n) {
  vector<int> result;
  for (int i = 2; i < sqrt(n) + 1e-5; ) {
    if (n % i == 0) {
      result.push_back(i);
      n /= i;
    } else {
      i++;
    }
  }
  if (n > 1) {
    result.push_back(n);
  }
  return result;
}


vector<int> get_powers(int n) {
  const vector<int> primes = find_primes(n);

  vector<int> result;
  result.push_back(0);

  int current_prime = primes[0];

  for(int i = 0; i < primes.size(); i++) {
    int prime = primes[i];

    if (current_prime == prime) {
      result[result.size() - 1]++;
    } else {         // next prime
      result.push_back(1);
    }
  }
  return result;
}


bool next_iter(vector<int>&target, const vector<int> M) {
  for (int i = target.size() - 1; i >= 0; i--) {
    if (target[i] < M[i]) {
      target[i]++;
      for (int j = i + 1; j < target.size(); j++) {
        target[j] = 0;
      }
      return true;
    }
  }
  return false;
}


bool check_nok(const vector<int>& p1, const vector<int>& p2,  const vector<int> &M) {
  for (int i = 0; i < M.size(); i++) {
    if (max(p1[i], p2[i]) != M[i]) {
      return false;
    }
  }
  return true;
}

int solve(int n) {
  int result = 0;
  vector<int> powers = get_powers(n);
  vector<int> p1(powers.size());

  do {
    vector<int> p2 = p1;
    
    do {
      if (check_nok(p1, p2, powers))   {
        result++;
      }
     } while (next_iter(p2, powers));
  } while (next_iter(p1, powers));
  
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

    int result;
    if (n == 1) {
      result = 1;
    } else {
      result = solve(n);
    }
    cout << n << " " << result << '\n';
  }
  return 0;
}
