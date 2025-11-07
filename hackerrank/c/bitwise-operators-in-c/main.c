#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int a = 1; a <= n; a++) {
      for (int b = a + 1; b <= n; b++) {
          int and = a & b, or = a | b, xor = a ^ b;
          if (xor > max_xor && xor < k) max_xor = xor;
          if (and > max_and && and < k) max_and = and;
          if (or > max_or && or < k) max_or = or;
      }
    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
