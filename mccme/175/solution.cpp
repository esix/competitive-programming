#include <iostream>

using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    int *result = new int[n]();

    for(int i=0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        result[a-1]++; result[b-1]++;
    }
    for(int i = 0; i < n; i++)
        cout << result[i] << " ";

    return 0;
}
