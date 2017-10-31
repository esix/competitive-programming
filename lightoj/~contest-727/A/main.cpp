#include <stdio.h>
#include <string>

using namespace std;

#define MAX_SIZE 101

struct Rect {
  int r, c, v;
};

int sum(const char field[MAX_SIZE][MAX_SIZE], int r1, int c1, int r2, int c2) {
  int v = 0;
  for(int r = r1; r <= r2; r++)
    for(int c = c1; c <= c2; c++)
      v += field[r][c];
  return v;
}


int solve(const char field[MAX_SIZE][MAX_SIZE], int rows, int cols) {
  Rect rs[MAX_SIZE][MAX_SIZE];
  int max_v = 0;

  for(int r = 0; r < rows; r++) {
    for(int c = 0; c < cols; c++) {
      char v = field[r][c];
      int v_up = -100000, v_left = -100000;

      if(r > 0) {
        Rect &rect = rs[r-1][c];
        v_up = rect.v + sum(field, r, rect.c, r, c);
      }
      if(c > 0) {
        Rect &rect = rs[r][c-1];
        v_left = rect.v + sum(field, rect.r, c, r, c);
      }

      //printf("Point %d %d: left=%d up=%d cur=%d\n", r, c, v_left, v_up, v );


      if(v_up >= v_left && v_up > v) {
        rs[r][c] = rs[r-1][c];
        rs[r][c].v = v_up;
      } else if(v_left >= v_up && v_left > v) {
        rs[r][c] = rs[r][c-1];
        rs[r][c].v = v_left;
      } else {
        rs[r][c].r = r;
        rs[r][c].c = c;
        rs[r][c].v = v;
      }

      if(rs[r][c].v > max_v) max_v = rs[r][c].v;
    }
  }

  //for(int r = 0; r < rows; r++) { for(int c = 0; c < cols; c++) {   printf("%3d ", rs[r][c].v);  }  printf("\n"); }

  return max_v;
}


int main(){
  int T;
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    int r, c;
    scanf("%d %d", &r, &c);
    char field[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i < r; i++) {
      scanf("%s", field[i]);
      for(int j=0; j < c; j++)
        switch(field[i][j]) {
          case 'T': field[i][j] = -1; break;
          case '.': field[i][j] = 0;  break;
          case 'B': field[i][j] = 1;  break;
        }
    }
    printf("Case %d: %d\n", t, solve(field, r, c));
  }

  return 0;
}
