#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

struct num {
    long long id,num;
}list[5001];

long long n,k,ans=0,top;
bool f[100];
int sum[10000];

long long calca(long long x) {
    long long tmp = x;
    while(x) {
        tmp += sum[x%10000];
        x/=10000;
    }
    return tmp;
}

bool CmpById(const num &a, const num &b) {
    return a.id<b.id;
}

bool CmpByNum(const num &a, const num &b) {
    return a.num<b.num;
}

int main() {
    cin >> n >> k;
    for(int i=0;i<k;i++) {
        cin >> list[i].num;
        list[i].id=i;
    }
    sort(list,list+k,CmpByNum);
    for (int i=0;i<10000;i++) sum[i]=i/1000+i/100%10+i/10%10+i%10;
    for(long long i=1; i<=n; i++) {
        long long tmp = calca(i);
        if(!f[i&63]) {
            ans++;
            while(ans==list[top].num && top<=k) {
                list[top].num = i;
                top++;
            }
        }
        f[i&63] = 0;
        if(!f[tmp&63] && tmp<=n) f[tmp&63] = 1;
    }
    sort(list,list+k,CmpById);
    cout << ans << endl;
    for(int i=0;i<k;i++) {
        cout << list[i].num << ' ';
    }

    return 0;
}
