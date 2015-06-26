
#include <iostream>
#include <math.h>

using namespace std;

#define PI (3.141592653589793)

int main() {
    ios::sync_with_stdio(false);
    cout.precision(9);
    int T;
    cin >> T;

    for(int t = 1; t <= T; t++) {
        int n;
        double R;
        cin >> R >> n;
        double a = PI / n;
        double sina  = sin(a);
        double r = R * sina / (1 + sina);

        cout << "Case " << t << ": " << r << endl;
    }

    return 0;
}
