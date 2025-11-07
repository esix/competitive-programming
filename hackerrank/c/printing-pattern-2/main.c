#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    int n;
    scanf("%d", &n);
    n--;
  	for (int i = -n; i <= n; i++) {
        for (int j = -n; j <= n; j++) {
            printf("%d", max(abs(i), abs(j)) + 1);
            printf("%c", j == n ? '\n' : ' ');
        }
    }
    return 0;
}
