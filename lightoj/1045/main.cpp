#include <iostream>
#include <math.h>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;

    double lns[1000001];           // ln n!
    lns[0] = 0;
    for(int i = 1; i <= 1000001; i++) {
        lns[i] = lns[i-1] + log(i);
    }

    for(int t = 1; t <= T; t++) {
        int n, b;
        cin >> n >> b;

        double logbn = lns[n] / log(b);   // log(b) n!
        long answer = logbn + 1;

        cout << "Case " << t << ": " << answer << endl;
    }

    return 0;
}
