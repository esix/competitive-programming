#include <iostream>

using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    ios::sync_with_stdio(false);
    
    
    while(true) {
        long int n, k, q;
        cin >> n >>  k >>  q;
        if(cin.eof()) break;
        q--;
        
        long int page = q / k, pages = n / k + int(bool(n % k));
        cout << MIN(page, pages - page) + 2 << endl;
    }

    return 0;
}