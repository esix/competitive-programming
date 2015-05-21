#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *d = new int[n*n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> d[i*n+j];
    int dist_min = INT_MAX, a_min, b_min, c_min;
    for(int a = 0; a < n; a++)              // naive impl
        for(int b = a + 1; b < n; b++)
            for(int c = b + 1; c < n; c++) {
                int dist = d[a*n+b] + d[b*n+c] + d[c*n+a];
                if(dist < dist_min) {
                    dist_min = dist; a_min = a; b_min = b; c_min = c;
                }
            }
    cout << a_min + 1 << " " << b_min + 1<< " " << c_min + 1;
    return 0;
}
