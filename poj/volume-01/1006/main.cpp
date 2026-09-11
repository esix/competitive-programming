#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <cmath>


using namespace std;


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  const int d_p = 23;
  const int d_e = 28;
  const int d_i = 33;
  const int D = 21252;              // d_p * d_e * d_i
  const int d_pe = 644;             // d_p * de
  const int d_pi = 759;             // d_p * di
  const int d_ei = 924;             // d_e * d_i
  const int d_pe_inv = 2;           // (d_pe * d_pe_inv) % d_i == 1
  const int d_pi_inv = 19;          // (d_pi * d_pi_inv) % d_e == 1
  const int d_ei_inv = 6;

  for (int test = 1; true; test++) {
      int p, e, i, d;
      cin >> p >> e >> i >> d;
      if (p == -1) break;

      p %= d_p;
      e %= d_e;
      i %= d_i;

      int x = (p * d_ei * d_ei_inv + e * d_pi * d_pi_inv + i * d_pe * d_pe_inv) % D;

      if (x == 0 || x < d) {
          int k = (d - x + D - 1) / D;
          if (k == 0) k++;
          x += k * D;
      }
      cout << "Case " << test << ": the next triple peak occurs in " << x - d << " days. \n";
  }
  return 0;
}
