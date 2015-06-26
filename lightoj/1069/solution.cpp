
#include <iostream>
#include <math.h>

using namespace std;

#define ABS(a) ((a)<0?-(a):a)

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;

    for(int t = 1; t <= T; t++) {
        int a, b;
        cin >> a >> b;

        int answer = 4*ABS(a-b) + 3 + 5 + 3 + 4*a + 3 + 5;

        cout << "Case " << t << ": " << answer << endl;
    }

    return 0;
}
