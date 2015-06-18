#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for(int t = 1; t <= T; t++) {
        int m, n;
        scanf("%d %d ", &m, &n);
        
        if(m > n) {
            int x = m; m = n; n = x;
        }
        int result;
        
        if(m == 1) {
            result = n;

        } else if(m == 2) {
            if     (n % 4 == 0) result = n;
            else if(n % 4 == 1) result = n + 1;
            else if(n % 4 == 2) result = n + 2;
            else if(n % 4 == 3) result = n + 1;

        } else {
            result = (m/2) * (n/2) * 2;
            int m_is_odd = (m % 2 == 1);
            int n_is_odd = (n % 2 == 1);

            if(m_is_odd) result += n / 2;
            if(n_is_odd) result += m / 2;
            if(m_is_odd && n_is_odd) result++;

        }
        
        //cout << "Case " << t << ": " << result << "\n";
        printf("Case %d: %d\n", t, result);
    }

    return 0;
}