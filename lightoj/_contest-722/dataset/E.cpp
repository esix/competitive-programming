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

ll GCD(ll a,ll b)
{
    if(!a||!b)
        return 0;
    return (ll)(GCD(b,(a%b))+a/b);
}

int main()
{
    //freopen("in_new.txt","r",stdin);
    //freopen("out_new.txt","w",stdout);
    int t,T;
    ll a,b;
    scanf("%d",&t);T=t;
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        int res=GCD(a,b);
        printf("Case %d: %lld\n",T-t,res);
        t&&printf("\n");
    }

    return 0;
}
