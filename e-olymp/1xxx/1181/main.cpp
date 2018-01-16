#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <math.h> 

using namespace std;


template <typename INT> 
INT gcd(INT m, INT n) {
  if (m == 0) return n;
  if (n == 0) return m;
  if (m == n) return m;
  if (m == 1) return (INT)1;
  if (n == 1) return (INT)1;

  bool m_even = ((m & 1) == 0);
  bool n_even = ((n & 1) == 0);

  if (m_even) {
    return n_even ? 2 * gcd(m >> 1, n >> 1) : gcd(m >> 1, n);
  }
  // ! m_even
  if (n_even) {
    return gcd(m, n >> 1);
  }

  // !n_even && !m_even
  return (n > m) ? gcd(m, (n - m) >> 1) : gcd((m - n) >> 1, n);
}


long get_lower_bound(long h, long t) {
  return floor(double(t) / double(h)) * h;
}

long get_higher_bound(long h, long t) {
    return ceil(double(t) / double(h)) * h;
  }
  

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while (true) {
    int n, t;
    cin >> n >> t;
    if (n == 0 && t == 0) break;
    
    vector<int> ms(n);
    for (int i = 0; i < n; i++) cin >> ms[i];

    vector<int> ts(t);
    for (int i = 0; i < t; i++) cin >> ts[i];

    const int msLength = ms.size();

    vector<long> lower(t);
    vector<long> higher(t);


    for (int i1 = 0; i1 < msLength - 3; i1++) {
      for (int i2 = i1 + 1; i2 < msLength - 2; i2++) {
        long lcm2 = ms[i1] * ms[i2] / gcd<long>(ms[i1], ms[i2]);
        
        for (int i3 = i2 + 1; i3 < msLength - 1; i3++) {
          long lcm3 = lcm2 * ms[i3] / gcd<long>(lcm2, ms[i3]);

          for (int i4 = i3 + 1; i4 < msLength - 0; i4++) {
            long h = lcm3 * ms[i4] / gcd<long>(lcm3, ms[i4]);    // lcm for all numbers = minimal height of table with such 
            
            if (i1 == 0 && i2 == 1 && i3 == 2 && i4 == 3) {   // initial value
              for (int i = 0; i < t; i++) {
                lower[i] = get_lower_bound(h, ts[i]);
                higher[i] = get_higher_bound(h, ts[i]);
              }
              // cout << "initial value; h=" << h << endl;
              // for (int i = 0; i < t; i++) {
              //   cout << '(' << ts[i] << ": "  << lower[i] << ',' << higher[i] << ')' << ' ';
              // }
              // cout << endl;
   
            } else {
              for (int i = 0; i < t; i++) {
                lower[i] = max(lower[i], get_lower_bound(h, ts[i]));
                higher[i] = min(higher[i], get_higher_bound(h, ts[i]));
              }
              // cout << "contimue; h=" << h << endl;
              // for (int i = 0; i < t; i++) {
              //   cout << '(' << ts[i] << ": "  << lower[i] << ',' << higher[i] << ')' << ' ';
              // }
              // cout << endl;
            }
          }
        }
      }
    }

    for (int i = 0; i < t; i++) {
      cout << lower[i] << ' ' << higher[i] << '\n';
    }
  }

  return 0;
}
