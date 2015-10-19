#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;




void pretty_print(vector<string> & files) {
    sort(files.begin(), files.end());
    int max_len = 0;
    
    for (std::vector<string>::iterator it = files.begin(); it!=files.end(); ++it) {
        if(max_len < it->length()) max_len = it->length();
    }
    
    int n_columns = (60 - max_len) / (max_len + 2) + 1;
    int n_rows = (files.size() / n_columns) + int(!!(files.size() % n_columns));
    
    //cout << setw(0) << n_rows << " x " << n_columns << "     maxlen=" << max_len << endl;
    

    for (int row = 0; row < n_rows; row++) {
        for (int col = 0; col < n_columns; col++) {
            int i = row + col * n_rows;
            if(i < files.size()) {
                cout << setw(max_len+2) << left << files[i] << setw(0);
            }
        }
        
        cout << endl;
    }
    
}



int main() {
    ios::sync_with_stdio(false);

    while(!cin.eof()) {
        int n;
        cin >> n;
        if(cin.eof()) return 0;
        
        vector<string> files;
        
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            files.push_back(s);
        }
        cout << "------------------------------------------------------------" << endl;
        pretty_print(files);
    }

    return 0;
}
