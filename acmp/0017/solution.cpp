#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


#define MIN(a, b) ((a) < (b) ? (a) : (b))


bool eq_0(const vector<int>& ls, int start, int len) {
    for(int i = 0; i < len; i++) {
        if(ls[i] != ls[start + i])
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    fstream inp, out;
    inp.open("input.txt", fstream::in);
    out.open("output.txt", fstream::out);
    
    int N;
    inp >> N;
    
    vector<int> ls(N);
    
    for(int i = 0; i < N; i++)
        inp >> ls[i];
        
    int answer;

    for(int i = 1; i <= N; i++) {
        bool can_be_answer = true;
        int j = i;
        while(j < N) {
            int rest = MIN(i, N - j);
            if(!eq_0(ls, j, rest)) {
                can_be_answer = false;
                break;
            }
            j += i;
        }
        if(can_be_answer) {
            answer = i;
            break;
        }
    }
    cout << answer;
    out << answer;

    return 0;
}