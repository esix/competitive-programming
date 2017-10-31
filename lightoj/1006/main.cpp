#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++) {
        long int cache[10001];
        long int n;
        cin >> cache[0] >> cache[1] >> cache[2] >> cache[3] >> cache[4] >> cache[5] >> n;
        
        for(int i = 6; i <= n; i++) {
            cache[i] = (cache[i-1] + cache[i-2] + cache[i-3] + cache[i-4] + cache[i-5] + cache[i-6]) % 10000007;
        }
        
        cout << "Case " << t << ": " << cache[n] % 10000007 << endl;
    }

    return 0;
}