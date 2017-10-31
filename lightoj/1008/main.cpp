#include <iostream>
#include <math.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++) {
        long long int s;
        cin >> s;
        
        long long int i = floor(sqrt(s-1));
        long long int base = i*i + 1;
        long long int middle = base + i;
        long long int dx = s > middle ? 0 : s - middle;
        long long int dy = s > middle ? middle - s : 0;
        if(i % 2 == 0) {
            swap(dx, dy);
        }
        //cout << "s=" << s <<"  i=" << i << "  dx=" << dx << " dy=" << dy << "     ";
        
        cout << "Case " << t << ": " << i + dx + 1 <<" " << i + dy + 1 << endl;
    }

    return 0;
}