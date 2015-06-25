#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,k,q,d,t,a1,a2,p;
    while(scanf("%d %d %d",&n,&k,&q)==3)
    {

        double a1=(double)n/k;
        p=ceil(a1);
        double a2=(double)q/k;
        d=ceil(a2);
        printf("%d\n",(min(d-1,p-d+1)+2));
    }

}
