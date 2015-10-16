#include <iostream>

using namespace std;

#define MAX_SIZE 150

#define ABS(a) (((a)<0)?(-(a)):a)

static int data[MAX_SIZE][MAX_SIZE][6];

int main() {
    ios::sync_with_stdio(false);
    int h, w;
    cin >> h >> w;
    
    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            int v;
            cin >> v;
            if(v) {
                data[y][x][0] = -1;
                for(int D = 1; D <= 5; D++) {
                    for(int d = 0; d < 4*D; d++) {
                        int xx = x + ABS(d - 2*D) - D;
                        int yy = y + D - ABS(2*D - ABS(d - D));
                        if(0 <= xx && xx < w && 0 <= yy && yy < h) {
                            data[yy][xx][D] |= v;
                        }
                    }
                }
            }
        }
    }

    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            int v = 0;
            for(int i = 0; i <= 5; i++) {
                if((v = data[y][x][i])) break;
            }
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
