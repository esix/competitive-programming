#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    set<int> ht;
    int v;
    bool has_result = false;

    while (true) {
        cin >> v;
        if (v == -1) {
            break;
        }
        ht.insert(v);
    }

    while (true) {
        cin >> v;
        if (v == -1) {
            break;
        }
        set<int>::iterator it = ht.find(v);
        if (it != ht.end()) {
            cout << v << ' ';
            ht.erase(it);
            has_result = true;
        }
    }

    if (!has_result) {
        cout << "empty\n";
    }
    
    return 0;
}
