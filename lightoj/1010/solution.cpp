#include <iostream>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++) {
        int m, n;
        cin >> m >> n;
        
        int result = (m /2)* (n/2) * 2;
        bool m_is_odd = (m % 2 == 1);
        bool n_is_odd = (n % 2 == 1);

        if(m_is_odd) {
            result += n / 2;
        }
        if(n_is_odd) {
            result += m / 2;
        }
        if(m_is_odd && n_is_odd) {
            result ++;
        }
        
        if(m == 1) result = n;
        else if(n == 1) result = m;
        else if(m == 2 && n == 2) result = 4;
        else if(m == 2 && n == 3) result = 4;
        else if(m == 3 && n == 2) result = 4;
        
        
        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}