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

int vis[100005],len[100005],ar[100005];
vector<int>pr[100005];
int main()
{
    int i,j,k,l,t,cs=1,r=1,s,m,n,a,b,c,d,e,f,g,h,u,v;
      // freopen("D.in","r",stdin);
      // freopen("Modify-ans.txt","w",stdout);
     memset(vis,0,sizeof(vis));
     for(i=2;i<=100000;i++)
     {
         if(vis[i]==0)
         {
             for(j=i;j<=100000;j+=i)
             {
                 vis[j]=1;
                 pr[j].pb(i);
             }
         }
     }
     sn("%d",&t);
     s=0;
     while(t--)
     {
         sn("%d",&n);
         s=s+n;
         for(i=0;i<n;i++)
         {
             sn("%d",&ar[i]);
         }
        memset(len,0,sizeof(len));
          int ans=0,anx=0;
         for(i=0;i<n;i++)
         {
             for(j=0;j<pr[ar[i]].size();j++)
             {
                 if(i>0)
                 {
                     if(ar[i-1]%pr[ar[i]][j]==0)
                     {
                         len[pr[ar[i]][j]]++;
                     }
                     else len[pr[ar[i]][j]]=1;
                 }
                 else
                    len[pr[ar[i]][j]]=1;
                if(len[pr[ar[i]][j]]>ans||(len[pr[ar[i]][j]]==ans&&pr[ar[i]][j]<anx))
                {
                    ans=len[pr[ar[i]][j]];anx=pr[ar[i]][j];
                }
             }
         }
         if(ans==0)
         {
             pf("-1\n");
         }
         else
            pf("%d %d\n",anx,ans);
     }
    //pf("%d\n",s);
    return 0;

}

/*
#include <bits/stdc++.h>
  #define _ ios_base::sync_with_stdio(0);cin.tie(0);
*/
