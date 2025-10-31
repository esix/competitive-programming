#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int result = 0;
    while (n) {
        result += n % 10;
        n /= 10;
    }
    printf("%d\n", result);
    return 0;
}