#include <iostream>

using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(a) ((a) >= 0 ? (a) : -(a))

int main() {
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++) {
        long int a, b;
        cin >> a >> b;
        
        long int step = 1;
        
        for(; a != b; step++) {
            if(a<b) {
                //b = b - a;
                //a = a;
                
                step += b / a - 1;
                b = b % a;
                a = a;
                if(b == 0) {
                    break;
                }
            } else {
                b = a-b;
                a = a-b;
            }
        }
        cout << "Case " << t << ": " << step << endl << endl;
    }

    return 0;
}