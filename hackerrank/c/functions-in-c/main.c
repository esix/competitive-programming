#include <stdio.h>

int max2(int a, int b) {
    return a > b ? a : b;
}

int max_of_four(int a, int b, int c, int d) {
    return max2(max2(a, b), max2(c, d));
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
