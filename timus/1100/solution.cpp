#include <iostream>

using namespace std;

#define MAX_SCORE 101

#define CHUNK_SIZE 10000

class Vec {
public:
    Vec() {
        size = 0;
        next = NULL;
        data = new int[CHUNK_SIZE];
    }

    Vec* push_back(int value) {
        if(size < CHUNK_SIZE) {
            data[size++] = value;
            return this;
        } else {
            if(!next) next = new Vec();
            return next->push_back(value);
        }
    }

    int size;
    int * data;
    Vec * next;
};


int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    Vec* data[MAX_SCORE] = {NULL};
    Vec* starts[MAX_SCORE] = {NULL};
    

    for(int i = 0; i < n; i++) {
        int id, score;
        cin >> id >> score;
        if(!data[score]) {
            data[score] = starts[score] = new Vec();
        }

        data[score] = data[score]->push_back(id);
    }

    for(int score = MAX_SCORE-1; score >= 0; --score) {
        const Vec *vec = starts[score];
        while(vec) {
            for(int i = 0; i < vec->size; i++) {
                cout << vec->data[i] << " " << score << endl;
            }
            vec = vec->next;
        }
    }

    return 0;
}
