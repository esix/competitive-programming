#include <iostream>
#include <map>

using namespace std;


const int primes[] = {
      2,      3,      5,      7,     11,     13,     17,     19,     23,     29, 
     31,     37,     41,     43,     47,     53,     59,     61,     67,     71, 
     73,     79,     83,     89,     97,    101,    103,    107,    109,    113, 
    127,    131,    137,    139,    149,    151,    157,    163,    167,    173, 
    179,    181,    191,    193,    197,    199,    211,    223,    227,    229, 
    233,    239,    241,    251,    257,    263,    269,    271,    277,    281,
    283,    293,    307,    311,    313};

const int n_primes = sizeof(primes) / sizeof(primes[0]);



int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    
    for(int t = 0; t < T; t++) {
        int n;
        cin >> n;
        
        int res[n_primes] = {0};
        
        map<int, int> additional_primes;
        
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            bool is_prime = true;
            for(int k = 0; k < n_primes; k++)
                if(a % primes[k] == 0) {
                    res[k]++;
                    is_prime = false;
                }
                
            if(is_prime) {
                if(additional_primes.find(a) != additional_primes.end())
                    additional_primes[a]++;
                else
                    additional_primes[a] = 1;
            }
        }
        
        int p_idx = 0;
        for(int k = 1; k < n_primes; k++)
            if(res[k] > res[p_idx])
                p_idx = k;
                
                
        if(res[p_idx] != 0) {
            cout << primes[p_idx] << " " << res[p_idx] << endl;
        } else if(additional_primes.size() > 0) {
            
            int max_count = 0;
            
            for(map<int, int>::iterator it = additional_primes.begin(); it != additional_primes.end(); ++it) {
                if(it->second > max_count) max_count = it->second;
            }

            for(map<int, int>::iterator it = additional_primes.begin(); it != additional_primes.end(); ++it) {
                if(it->second == max_count) {
                    cout << it->first << " " << max_count << endl;
                    break;
                }
                
            }
        } else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}