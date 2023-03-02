#include <iostream>

// https://oeis.org/A001002
// cache = [1n, 1n]
// a = (n) => cache[n] || (cache[n] = (BigInt(n)*(22n*BigInt(n)-11n)* a(n-1) + (9n*BigInt(n)-6n)*(3n*BigInt(n)-4n)*a(n-2))/(5n*BigInt(n)*BigInt(n+1)))

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

  while (!cin.eof()) {
    int n = 0;
    cin >> n;
    if (n == 0) break;

    cout /*<< n - 2 << " "*/ << t[MAX * (n - 1) + 1] << endl;
  }

  return 0;
}
