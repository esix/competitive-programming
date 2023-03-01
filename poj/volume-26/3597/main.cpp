#include <iostream>

// https://oeis.org/A001002
// a = (n) => n < 2 ? 1n : (BigInt(n)*(22n*BigInt(n)-11n)* a(n-1) + (9n*BigInt(n)-6n)*(3n*BigInt(n)-4n)*a(n-2))/(5n*BigInt(n)*BigInt(n+1))


using namespace std;

#define MAX 5000

typedef unsigned long long int INT;



int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  INT *t = new INT[(MAX + 2)*(MAX + 2)];

  // T(n, k):=if n<0 or k<0 then 0 else if n<k then 0 else if n=k then 1 else  if k=0 then 0 else  T(n-1, k-1)+T(n, k+1)+T(n, k+2);
  for (int n = 0; n <= MAX; n++) {
    t[MAX * n + n] = 1;
    t[MAX * n + n + 1] = 0;
    for (int k = n - 1; k >= 1; k--) {
      t[MAX * n + k] = t[MAX * (n-1) + k - 1] + t[MAX * n + k + 1] + t[MAX * n + k + 2];
    }
    t[MAX * n + 0] = 0;
  }

  INT a[MAX + 1];
  a[0] = 1;
  a[1] = 1;
  for (INT n = 2; n <= MAX; n++) {
    // a[n] = (INT(11) * n * (2ULL * n - 1ULL) * a[n-1] + 3ULL*(3ULL*n-2ULL)*(3ULL*n-4ULL) * a[n-2]) / INT(5 * n * (n+1));
    // a[n] = A038112[n-1] / n;
    // a[n] = tt(n, 1);
    a[n] = t[MAX * n + 1];
  }
  
  while (!cin.eof()) {
    int n;
    cin >> n;
    cout << *(unsigned long int *)(a + n - 1) << endl;
  }

  return 0;
}
