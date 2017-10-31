// TLE TLE TLE
// added some crazy optimizations
//

#include <iostream>
#include <algorithm>
using namespace std;

int self_numbers_size = 9;

inline int d(int n) {
  int res = 1;
  while(n /= 10) res++;
  return res;
}

inline int r(int n) {
  return (n-1) % 9 + 1;
}

inline int dr_star(int n) {
  n = (n-1) % 9 + 1;
  return (n & 1) ? (n + 9) >> 1 : n >> 1;
}

char sods[1000] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 2,
3, 4, 5, 6, 7, 8, 9, 10, 11, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 4,
5, 6, 7, 8, 9, 10, 11, 12, 13, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 6,
7, 8, 9, 10, 11, 12, 13, 14, 15, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 8,
9, 10, 11, 12, 13, 14, 15, 16, 17, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 1,
2, 3, 4, 5, 6, 7, 8, 9, 10, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 3,
4, 5, 6, 7, 8, 9, 10, 11, 12, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 5,
6, 7, 8, 9, 10, 11, 12, 13, 14, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 7,
8, 9, 10, 11, 12, 13, 14, 15, 16, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 9,
10, 11, 12, 13, 14, 15, 16, 17, 18, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 2,
3, 4, 5, 6, 7, 8, 9, 10, 11, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 4,
5, 6, 7, 8, 9, 10, 11, 12, 13, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 6,
7, 8, 9, 10, 11, 12, 13, 14, 15, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 8,
9, 10, 11, 12, 13, 14, 15, 16, 17, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 10,
11, 12, 13, 14, 15, 16, 17, 18, 19, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 3,
4, 5, 6, 7, 8, 9, 10, 11, 12, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 5,
6, 7, 8, 9, 10, 11, 12, 13, 14, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 7,
8, 9, 10, 11, 12, 13, 14, 15, 16, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 9,
10, 11, 12, 13, 14, 15, 16, 17, 18, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 11,
12, 13, 14, 15, 16, 17, 18, 19, 20, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 4,
5, 6, 7, 8, 9, 10, 11, 12, 13, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 6,
7, 8, 9, 10, 11, 12, 13, 14, 15, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 8,
9, 10, 11, 12, 13, 14, 15, 16, 17, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 10,
11, 12, 13, 14, 15, 16, 17, 18, 19, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 12,
13, 14, 15, 16, 17, 18, 19, 20, 21, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 5,
6, 7, 8, 9, 10, 11, 12, 13, 14, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 7,
8, 9, 10, 11, 12, 13, 14, 15, 16, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 9,
10, 11, 12, 13, 14, 15, 16, 17, 18, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 11,
12, 13, 14, 15, 16, 17, 18, 19, 20, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 13,
14, 15, 16, 17, 18, 19, 20, 21, 22, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 6,
7, 8, 9, 10, 11, 12, 13, 14, 15, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 8,
9, 10, 11, 12, 13, 14, 15, 16, 17, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 10,
11, 12, 13, 14, 15, 16, 17, 18, 19, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 12,
13, 14, 15, 16, 17, 18, 19, 20, 21, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 14,
15, 16, 17, 18, 19, 20, 21, 22, 23, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 7,
8, 9, 10, 11, 12, 13, 14, 15, 16, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 9,
10, 11, 12, 13, 14, 15, 16, 17, 18, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 11,
12, 13, 14, 15, 16, 17, 18, 19, 20, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 13,
14, 15, 16, 17, 18, 19, 20, 21, 22, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 15,
16, 17, 18, 19, 20, 21, 22, 23, 24, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 8,
9, 10, 11, 12, 13, 14, 15, 16, 17, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 10,
11, 12, 13, 14, 15, 16, 17, 18, 19, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 12,
13, 14, 15, 16, 17, 18, 19, 20, 21, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 14,
15, 16, 17, 18, 19, 20, 21, 22, 23, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 16,
17, 18, 19, 20, 21, 22, 23, 24, 25, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 9,
10, 11, 12, 13, 14, 15, 16, 17, 18, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 11,
12, 13, 14, 15, 16, 17, 18, 19, 20, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 13,
14, 15, 16, 17, 18, 19, 20, 21, 22, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 15,
16, 17, 18, 19, 20, 21, 22, 23, 24, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 17,
18, 19, 20, 21, 22, 23, 24, 25, 26, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27
};


inline int sod(int n) {
  int res = 0;
  while(n > 0) {
    res += sods[n % 1000];
    n /= 1000;
  }
  return res;
}

inline int abs(int n) {
  return n < 0 ? -n : n;
}

bool is_sn(int i) {
  int h = dr_star(i);
  int max = d(i);

  for(int k = 0; k <= max; k++) {
    if(sod(abs(i - h - 9*k)) == h + 9 * k) return false;
  }
  return true;
}


struct TestCase {
  int order_number;
  int sn_index;
  int result;

  static bool SnIndexComparator(const TestCase &a, const TestCase &b) {
    return a.sn_index < b.sn_index;
  }

  static bool OrderNumberComparator(const TestCase &a, const TestCase &b) {
    return a.order_number < b.order_number;
  }
};



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  TestCase test_cases[5000];

  //self_numbers.reserve(65536);
  //self_numbers = new int[977788];

  int N, K;
  cin >> N >> K;

  for(int i = 0; i < K; i++) {
    int s;
    cin >> s;
    test_cases[i].order_number = i;
    test_cases[i].sn_index = s - 1;
  }
  sort(test_cases, test_cases + K, TestCase::SnIndexComparator);

  int current_idx = 0;

  while(current_idx < K && test_cases[current_idx].sn_index < 9) {
    switch(test_cases[current_idx].sn_index) {
      case 0: test_cases[current_idx].result = 1; break;
      case 1: test_cases[current_idx].result = 3; break;
      case 2: test_cases[current_idx].result = 5; break;
      case 3: test_cases[current_idx].result = 7; break;
      case 4: test_cases[current_idx].result = 9; break;
      case 5: test_cases[current_idx].result = 20; break;
      case 6: test_cases[current_idx].result = 31; break;
      case 7: test_cases[current_idx].result = 42; break;
      case 8: test_cases[current_idx].result = 53; break;
    }
    current_idx++;
  }


  int d = 2, next_d = 100;

  if(N < 9) {
    switch(N) {
      case 1: self_numbers_size = 1; break;
      case 2: self_numbers_size = 1; break;
      case 3: self_numbers_size = 2; break;
      case 4: self_numbers_size = 2; break;
      case 5: self_numbers_size = 3; break;
      case 6: self_numbers_size = 3; break;
      case 7: self_numbers_size = 4; break;
      case 8: self_numbers_size = 4; break;
    }
  } else
  for(int i = 64; i <= N; i++) {
    if(i == next_d) {
      next_d *= 10;
      d++;
    }

    int h = dr_star(i);
    int o;

    switch(d) {
      case 8: o = h + 9 * 8; if(sod(i - o) == o) goto outer;
      case 7: o = h + 9 * 7; if(sod(i - o) == o) goto outer;
      case 6: o = h + 9 * 6; if(sod(i - o) == o) goto outer;
      case 5: o = h + 9 * 5; if(sod(i - o) == o) goto outer;
      case 4: o = h + 9 * 4; if(sod(i - o) == o) goto outer;
      case 3: o = h + 9 * 3; if(sod(i - o) == o) goto outer;
      case 2: o = h + 9 * 2; if(sod(i - o) == o) goto outer;
      case 1: o = h + 9 * 1; if(sod(i - o) == o) goto outer;
      case 0: o = h + 9 * 0; if(sod(i - o) == o) goto outer;
    }

    // i is next self number


    while(current_idx < K  && test_cases[current_idx].sn_index == self_numbers_size) {
      test_cases[current_idx].result = i;
      current_idx ++;
    }
    self_numbers_size++;

    outer:
    ;
  }

  cout << self_numbers_size << endl;
  sort(test_cases, test_cases + K, TestCase::OrderNumberComparator);
  for(int i = 0; i < K; i++) {
    cout << test_cases[i].result << ' ';
  }


  return 0;
}
