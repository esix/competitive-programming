#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char line[1001];
    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%1000s", line);
    for (char *c = line; *c; c++) {
        if ('0' <= *c && *c <= '9') {
            count[*c - '0']++;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d\n",
        count[0], count[1], count[2], count[3], count[4],
        count[5], count[6], count[7], count[8], count[9]);
    return 0;
}
