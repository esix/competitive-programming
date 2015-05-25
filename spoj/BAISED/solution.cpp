#include <iostream>
#include <map>
#include <cmath>

using namespace std;

typedef long long int score_t;



int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    
    for(int t = 0; t < T; t++) {
        int N;
        cin >> N;

        map<score_t, int> score_count;
        for(int n = 0; n < N; n++) {
            string command_name;
            score_t command_score;
            cin >> command_name >> command_score;

            map<score_t, int>::iterator it = score_count.find(command_score);
            if(it == score_count.end())
                score_count.insert(make_pair(command_score, 1));
            else
                it->second++;
        }
        
        int place = 1;
        score_t result = 0;
        
        for(map<score_t, int>::iterator it = score_count.begin(); it != score_count.end(); it++) {
            score_t score = it->first;
            int count = it->second;
            for(int c = 0; c < count; c++) {
                result += abs(place - score);
                place ++;
            }
        }
        
        cout << result << endl;

        
    }
    return 0;
}
