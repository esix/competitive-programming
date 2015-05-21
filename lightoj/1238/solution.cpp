#include <iostream>
#include <set>


using namespace std;

#define MAX  21

#define EMPTY 1
#define WALL  0


typedef char lab_t[MAX*MAX];



void print_set(const set<int>& s) {
    for(set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        int y = (*it) / MAX;
        int x = (*it) % MAX;
        cout << "(" << y << "," << x << ")";
    }
}


int find_path(const lab_t& lab, int start_pos, int end_pos) {
    set<int> visited;
    set<int> current;
    current.insert(start_pos);
    int step = 0;

    while(true) {
        if(current.find(end_pos) != current.end()) return step;
        step++;
        
        /*cout << endl;
        cout << "Step " << step << endl;
        cout << "Current: ";
        print_set(current);
        cout << endl;*/
        
        
        set<int> adjacent;
        for(set<int>::iterator it = current.begin(); it != current.end(); ++it) {
            if(lab[*it + 1] == EMPTY) adjacent.insert(*it + 1);
            if(lab[*it - 1] == EMPTY) adjacent.insert(*it - 1);
            if(lab[*it + MAX] == EMPTY) adjacent.insert(*it + MAX);
            if(lab[*it - MAX] == EMPTY) adjacent.insert(*it - MAX);
            visited.insert(*it);
        }

        current.clear();

        for(set<int>::iterator it = adjacent.begin(); it != adjacent.end(); ++it) {
            if(visited.find(*it) == visited.end()) {
                current.insert(*it);
            }
        }
        
        if(current.empty()) {
            return -1;
        }
    }
}




int main() {
    int T;
    cin >> T;
    
    for(int t = 1; t <= T; t++) {
        int m,n;
        cin >> m >> n;
        
        lab_t lab = {0};
        
        int h, a, b, c;

        
        for(int i = 0; i < m; i++) {
            string line;
            cin >> line;
            
            for(int j = 0; j < n; j++) {
                char ch = line[j];
                int pos = i * MAX + j;
                if(ch =='#' || ch == 'm') lab[pos] = WALL;
                else {
                    lab[pos] = EMPTY;
                    if(ch == 'a') a = pos;
                    else if(ch == 'b') b = pos;
                    else if(ch == 'c') c = pos;
                    else if(ch == 'h') h = pos;
                }
            }
        }
        int a_len = find_path(lab, a, h);
        int b_len = find_path(lab, b, h);
        int c_len = find_path(lab, c, h);
        int l = max(max(a_len, b_len), c_len);
        cout << "Case " << t << ": " << l << endl;
        
    }
    
    
    
    return 0;
}