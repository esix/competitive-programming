#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    float f, g;
	scanf("%d %d\n%f %f", &n, &m, &f, &g);
    printf("%d %d\n%.1f %.1f",
      n + m,
      n - m,
      f + g,
      f - g);
    return 0;
}