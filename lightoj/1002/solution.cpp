#include <iostream>
#include <utility>
#include <climits>
#include <queue>
#include <vector>

using namespace std;

const int INF = INT_MAX;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))


int main() {
    ios::sync_with_stdio(false);
    
    int T;
    cin >> T;
    
    for(int testCase = 1; testCase <= T; testCase++) {
        int n, m;
        cin >> n >> m;
        
        vector< vector< pair <int, int> > > g(n);
        
        for(int i = 0; i < m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            g[u].push_back(make_pair(w, v));
            g[v].push_back(make_pair(w, u));
        }
        int t;
        cin >> t;
        
        int dist[n], p[n];
        fill(dist, dist + n, INF);
        
        dist[t] = 0;
        priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > q;
        q.push(make_pair(0, t));
        while(!q.empty()) {
            pair<int, int> u = q.top();
            q.pop();
            if (u.first > dist[u.second]) continue;
            for (int i = 0; i < (int) g[u.second].size(); i++) {
                int v = g[u.second][i].second, len = g[u.second][i].first;
                if (dist[v] > MAX(dist[u.second], len)) {
                    dist[v] = MAX(dist[u.second], len);
                    q.push(make_pair(dist[v], v));
                }
            }
        }
        
        cout << "Case " << testCase << ":" << endl;
        for(int i = 0; i < n; i++) {
            if(dist[i] != INF)
                cout << dist[i] << endl;
            else
                cout << "Impossible" << endl;
        }
        
    }

    return 0;
}