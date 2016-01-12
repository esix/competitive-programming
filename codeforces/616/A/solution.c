#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define BUFFERSIZE 1000001

int main() {
  char* a = (char*)malloc(BUFFERSIZE);
  char* b = (char*)malloc(BUFFERSIZE);
  fgets(a, BUFFERSIZE, stdin);
  fgets(b, BUFFERSIZE, stdin);

  while(*a == '0') a++;
  while(*b == '0') b++;

  int a_len = strlen(a);
  int b_len = strlen(b);


  if(a_len > b_len) {
    printf(">\n");
    return 0;
  }
  if(a_len < b_len) {
    printf("<\n");
    return 0;
  }

  for(int i = 0; i < a_len; i++) {
    if(a[i] == b[i]) continue;

    if(a[i] > b[i]) {
      printf(">\n");
    } else {
      printf("<\n");
    }
    return 0;
  }

  printf("=\n");

  return 0;
}
