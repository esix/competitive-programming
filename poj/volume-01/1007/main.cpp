#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <cmath>


using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    string s;
    getline(cin, s);
    multimap<int, string> lines; // The order of the key-value pairs whose keys compare equivalent is the order of insertion and does not change

    for (int i = 0; i < m; i++) {
        getline(cin, s);
        int a = 0, c = 0, g = 0, t = 0, value = 0;
        for (int k = n - 1; k >= 0; k--) {
            switch(s[k]) {
                case 'A': a++; break;
                case 'C': c++; value += a; break;
                case 'G': g++; value += (a + c); break;
                case 'T': t++; value += a + c + g; break;
            }
        }
        lines.insert(pair<int, string>(value, s));
    }

    for (const auto& pair : lines) {
        std::cout << pair.second << "\n";
    }

    return 0;
}
