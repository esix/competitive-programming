#include <iostream>


using namespace std;

typedef unsigned long long INT;

#define MAX_F 20

/*
 19! = 121645100408832000 (> 10^18)
*/
const INT F[MAX_F] = {
     1ull
    ,1ull
    ,2ull
    ,6ull
    ,24ull
    ,120ull
    ,720ull
    ,5040ull
    ,40320ull
    ,362880ull
    ,3628800ull
    ,39916800ull
    ,479001600ull
    ,6227020800ull
    ,87178291200ull
    ,1307674368000ull
    ,20922789888000ull
    ,355687428096000ull
    ,6402373705728000ull
    ,121645100408832000ll   /* 19 */
};


bool dynsolve(INT n, int i, int* result) {
    if(n == 0) {
        *result = -1;
        return true;
    }
    
    if(n > F[i]*2) {    // cutting
        return false;
    }

    for( ; i >= 0; i--) {
        if(n >= F[i] && dynsolve(n - F[i], i -1, result+1)) {
            *result = i;
            return true;
        }
    }
    
    
    return false;
}



int main() {
    int T;
    cin >> T;
    
    for(int i=1; i <= T; i++) {
        INT n;
        cin >> n;
        int result[MAX_F+1] = {0};
        if(dynsolve(n, MAX_F+1, result)) {
            cout << "Case " << i << ": ";
            int k;
            for(k=0; result[k] != -1; k++);
            for(k--; k >= 0; k--) {
                cout << result[k] << "!";
                if(k > 0) cout << "+";
            }
            cout << endl;
            
        } else {
            cout << "Case " << i << ": impossible" << endl;
        }
    }
    
   
    return 0;
}

