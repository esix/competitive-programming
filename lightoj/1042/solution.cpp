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

        // skip right zeroes
        for(; ((n >> pos) & 1) == 0; pos++);

        // count 1s
        for(; (n >> pos) & 1; pos++, num_1s++);
        num_1s--;

        // change 0 to 1
        n |= 1 << pos;

        for(int p2 = 0; p2 < pos; p2++)
          if(p2 < num_1s)            // set to 1
                n |= 1 << p2;
            else                     // set to 0
                n &= ~(1 << p2);

        cout << "Case " << t << ": " << n << endl;
    }

    return 0;
}
