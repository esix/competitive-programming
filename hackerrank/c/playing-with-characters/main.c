#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 101

int main() 
{
    char c;
    scanf("%c\n", &c);
    printf("%c\n", c);
    
    char s[100]; 
    scanf("%[^\n]%*c\n", s);
    printf("%s\n", s);

    scanf("%[^\n]%*c", s);
    printf("%s\n", s);

    return 0;
}