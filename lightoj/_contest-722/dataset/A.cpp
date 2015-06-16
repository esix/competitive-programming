//BISMILLAHIR RAHMANIR RAHIM
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<set>
#include <iostream>
#include<stack>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#define N 1000000
#define sn scanf
#define pf printf
#define pb push_back

typedef long long int ll;
using namespace std;
struct T{
int a;
};
char st[100005];
int ar[10][10],arr[]={'A','B','C','D','E','F','G','H'};
int main()
{
    int i,j,k,l,t,cs=1,r=1,s,m,n,a,b,c,d,e,f,g,h,u,v;
    //freopen("A.in","r",stdin);
   // freopen("A.sol","w",stdout);

     sn("%d",&t);
     while(t--)
     {
         sn("%d %d %s",&l,&n,&st);
         int ans=l;
         memset(ar,0,sizeof(ar));
         for(i=0;i<l;i++)
         {
             ar[i%n][st[i]-'A']++;
         }
         do{
              u=0;
            for(i=0;i<n;i++)
            {
                u=u+ar[i][arr[i]-'A'];
            }
            ans=min(ans,l-u);
         }while(next_permutation(arr,arr+n));
         pf("%d\n",ans);
     }
    return 0;

}

/*
#include <bits/stdc++.h>
  #define _ ios_base::sync_with_stdio(0);cin.tie(0);
*/
