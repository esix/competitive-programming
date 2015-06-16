//BISMILLAHIR RAHMANIR RAHIM
// OUM NAMA MA SWARASATI

#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<fstream>
#include<string>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<sstream>
#include<stack>
#include<stdlib.h>
#include<iostream>
#include<algorithm>

#define AB push_back
#define MB pop_back
#define CL(vctr) vctr.clear()
#define MS(v,ar) memset(ar,v,sizeof(ar))
#define MP make_pair
#define F first
#define S second

#define MX(a,b) a>b?a:b
#define MN(a,b) a<b?a:b
#define ABS(x) x>0?x:-x

#define INF 1<<30
#define PI 2 * acos( 0 )
#define EPS 1E-9
#define SZ 100000+5
#define MOD 1000000000+7

using namespace std;
typedef long long int ll;

bool chprime[SZ];
ll prime[SZ],p[SZ],prm[SZ];
int seivePrime(ll sz)
{
    ll n,i,v,j;
    prime[0]=2;
    n=1;v=sqrt(sz)+1;
    for(i=3;i<=v;i+=2)
    {
        if(!chprime[i])
        {
            for(j=i*i;j<sz;j+=2*i)
                chprime[j]=1;
            prime[n++]=i;//ps2(" ",prime[n-1]);
        }
    }
    for(j=i;j<sz;j+=2)
    if(!chprime[j])
        prime[n++]=j;//ps2(" ",prime[n-1]);
    return n;
}

ll BigMOd(ll x,ll y,ll m)
{
    ll r;
    r=1;
    while(y>0)
    {
        if((y%2))r=((r*x)%m);

        y/=2;
        x=((x*x)%m);
    }
    return (r%m);
}

int main()
{
    //freopen("in_new.txt","r",stdin);
    //freopen("out_new.txt","w",stdout);
    seivePrime(SZ);
    //printf("%d",);
    ll n,prm,a,b,c,i;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&a);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&prm);
            p[prm]+=i+1;
        }
        ll res=1,m=MOD;
        for(i=0;prime[i]<=a;i++)
        {
            ll N=a,cnt=0;
            while(N>0)
            {
                cnt+=N/prime[i];
                N/=prime[i];
            }
            b=cnt*n*(n+1)/2;
            c=p[prime[i]]*cnt;
            res=((res%m)*BigMOd(prime[i],b-c,m))%m;
        }
        printf("%lld\n",res);
    }


    return 0;
}

//seivePrime(1005);
//    int MD=MOD;
//    for(int i=0;prime[i]<=1000;i++)
//    {
//        mod[i][1]=1;
//        for(int j=2;j<=1000;j++)
//        {
//            mod[i][j]=mod[i][j-1];
//            if(j%prime[i])
//                mod[i][j]=(mod[i][j-1]*j)%MD;
//        }
//    }
//    int t,n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",a+i);
//    }
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&p+i);
//    }
//
//    int res=0;
//    for(int i=0;i<n;i++)
//    {
//        res=((res%MD)+BigMOd(mod[p[i]][a[i]],i,MD));
//    }
//    printf("%d\n",res);
//
