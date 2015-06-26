#include <iostream>
#include <math.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;

    for(int t = 1; t <= T; t++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(c < b) swap(c, b);
        if(c < a) swap(c, a);

        bool answer = c*c == a*a + b*b;

        cout << "Case " << t << ": " << (answer ? "yes" : "no") << endl;
    }

    return 0;
}
