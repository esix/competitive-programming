#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++) {
        int n;
        cin >> n;
        
        int result = 0;
        
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if(a > 0) result += a;
        }
        
        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}