#include <fstream>
#include <iostream>
#include <math.h>

using namespace std;
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    ios::sync_with_stdio(false);
    
    std::fstream in, out;
    in.open("input.txt", std::fstream::in);
    out.open("output.txt", std::fstream::out);

    int k, n;
    in >> k >> n;
    long long int cache[n + 1];
    
    for(int i = 1; i <= n; i++){
        long long int result = 0;
        if(i <= k) result = 1;
        for(int j = MAX(i - k, 1); j < i; j++) {
            result += cache[j];
        }
        cache[i] = result;
        cout << " Step " << i << " : " << result << endl;
    }
    
    out << cache[n];
    
    return 0;
}