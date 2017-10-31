#include <stdio.h>
#include <string>

using namespace std;

#define MAX_SIZE 100002


int main(){
  int T;
  scanf("%d", &T);

  for(int t = 1; t <= T; t++) {
    int n;
    scanf("%d", &n);

    long long int weights[MAX_SIZE][2] = {0};
    long long int total_sum = 0;
    long long int res[MAX_SIZE] = {0};
    int neighbours[MAX_SIZE][2] = {0};

    for(int i = 1; i <= n-1; i++) {
      int u, v;
      long long d = 0;
      scanf("%d %d %lld", &u, &v, &d);

      total_sum += d;
      if(neighbours[u][0] == 0){
        neighbours[u][0] = v; weights[u][0] = d;
      }else {
        neighbours[u][1] = v; weights[u][1] = d;
      }
      if(neighbours[v][0] == 0){
        neighbours[v][0] = u; weights[v][0] = d;
      }else {
        neighbours[v][1] = u; weights[v][1] = d;
      }
    }

    //for(int i=1; i <=n; i++) {
    //  printf("%d) ->%d : %lld  ;  ->%d : %lld \n", i, neighbours[i][0], weights[i][0],  neighbours[i][1], weights[i][1]);
    //}


    int cur = 1;
    for(; cur <= n-1; cur++) {
      if(neighbours[cur][1] == 0) break;
    }

    long long int left = 0, right = total_sum;

    do {
      res[cur] = left > right ? left : right;
      if(res[neighbours[cur][0]]) {
        left += weights[cur][1];
        right -= weights[cur][1];
        cur = neighbours[cur][1];
      } else {
        left += weights[cur][0];
        right -= weights[cur][0];
        cur = neighbours[cur][0];
      }

    } while(cur);

    for(int i = 1; i <= n; i++) {
      if(i <= n)
        printf("%lld ",  res[i]);
      else
        printf("%lld",  res[i]);
    }
    printf("\n");
  }

  return 0;
}
