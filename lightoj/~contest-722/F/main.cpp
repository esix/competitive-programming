#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    
    while(true) {
        if(cin.eof()) break;
        long long int b, m, n;
        cin >> b >> m >> n;

        long long int a1 = m;
        long long int a2 = b;
        
        for(int i = 1; i < n; i++) {
            long long int new_a1 = a2;
            long long int new_a2 = a1 + a2;
            a1 = new_a1;
            a2 = new_a2;
        }
        cout << a2 << endl;
    }

    return 0;
}