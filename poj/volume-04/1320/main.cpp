#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int x = 3, y = 1;
  for(int i = 0; i < 10; i++) {
    int temp_x = 3 * x + 8 * y;
    int temp_y = x + 3 * y;
    cout << setw(10) << temp_y << setw(10) << (temp_x - 1) / 2 <<endl; 
    x = temp_x;
    y = temp_y;
  }

 return 0;
}
