#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++) {
        long int n;
        cin >> n;
        
        int pos = 0, num_1s = 0;
        // find ...01...
        while(true) {
            int bit = (n >> pos) & 1;
            if(bit) num_1s++;
            if(!bit && num_1s) break;
            pos++;
        }


        n ^= 1 << (pos+1);
        n ^= 1 << (pos);
        
        cout << "Case " << t << ": " << n << endl;
    }

    return 0;
}