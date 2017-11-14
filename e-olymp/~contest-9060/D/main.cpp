#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > edges;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) {
            int e;
            cin >> e;
            if(i < j && e) edges.push_back(make_pair(i, j));
        }

    int *colors = new int[n];
    for(int i = 0; i < n; i++)  cin >> colors[i];
    
    int result = 0;
    for(vector<pair<int, int> >::iterator it = edges.begin(); it != edges.end(); ++it)
        if(colors[it->first] != colors[it->second]) result ++;

    cout << result;
    return 0;
}
